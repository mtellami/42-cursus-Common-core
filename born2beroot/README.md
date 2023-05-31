<div align="center">

# 42cursus: born2beroot
### 🔥System Administration🔥
</div>

> This project aims to introduce you to the wonderful world of virtualization.
You will create your first machine in VirtualBox under specific instructions. Then, at the end of this project, you will be able to set up
your own operating system while implementing strict rules.

---

### ♦️ . Setting up the environment

####  Download Virtualbox
- <a href="https://www.virtualbox.org/wiki/Downloads">Link to</a>

####  Download Debian
- <a href="https://www.debian.org/distrib/">Link to</a>

---

### ♦️ . Mandatory part

#### Installing requirement
```
    $ sudo apt update && sudo apt upgrade -y 
    $ sudo apt install vim
```


#### Installing SSH and configuring SSH service
```
    $ sudo apt install openssh-server
```

- Changing default port (22) to 4242 (Edit the file, change the line Port22 to Port 4242)
```
    $ sudo nano /etc/ssh/sshd_config
```

#### Installing and configuring UFW
- Install UFW
```
    $ sudo apt install ufw
```

- Enable
```
    $ sudo ufw enable
```

- Configure the rules
```
    $ sudo ufw allow ssh
```

- Configure the port rules
```
    $ sudo ufw allow 4242
```

#### Set password policy
- Password expiration, Min number of days allowed before the modification & Notification before expiration at least 7 days before.
  - Open login.defs file
    ```
        $ sudo nano /etc/login.defs
    ```
  - Find this part & edit it like this
    ```
        PASS_MAX_DAYS 30
        PASS_MIN_DAYS 2
        PASS_WARN_AGE 7
    ```
- Characters long, Contain (uppercase, lowercase letter, and a number), Not contain more than 3 consecutive identical characters.
    - Open the file
    ```
        $ sudo nano /etc/pam.d/common-password
    ```
    - Find the following line
    ```
        password [success=1 default=ignore] pam_unix.so obscure sha512
    ```
    - And add an extra word: minlen=10 at the end
    ```
        password [success=2 default=ignore] pam_unix.so obscure sha512 minlen=10
    ```
    - Find this line
    ```
        password    requisite   pam_pwquality.so retry=3
    ```
    - Add these values
    ```
        lcredit =-1 ucredit=-1 dcredit=-1 maxrepeat=3 usercheck=0 difok=7 enforce_for_root
    ```
#### Change hostname
- Change the hostname
 ```
        $ hostnamectl set-hostname new_hostname42
 ```
- Change /etc/hosts file
 ```
        $ sudo nano /etc/hosts
 ```
 ```
        127.0.0.1   localhost
        127.0.0.1   new_hostname42
 ```
#### Installing sudo
- Login as root
```
    $ su -
```
- Install sudo
```
    $ apt install sudo
```
- Adding user in sudo group
```
    $ usermod -aG sudo your_username
```
- Give privilege as a su
 - Open sudoers file
 ```
    $ sudo visudo
 ```
 - Add this line in file
 ```
    your_username    ALL=(ALL) ALL
 ```
#### Create user and assign into group
- Create the user
```
    $ sudo adduser new_username
```
- Create group
```
    $ sudo groupadd user42
    $ sudo groupadd evaluating
```
- Assign user into group
```
    $ sudo usermod -aG user42 your_username
    $ sudo usermod -aG evaluating your_new_username
```
- Check which groups user account belongs
```
    $ groups
```
#### Configuring sudoers group
- Open file
```
    $ sudo nano /etc/sudoers
```
- Authentication using sudo rule
```
    Defaults     secure_path="..."
    Defaults     passwd_tries=3
```
- For wrong password warning message
```
    Defaults     badpass_message="Password is wrong, please try again!"
```
- Each action log file has to be saved in the /var/log/sudo/ folder
```
    Defaults	logfile="/var/log/sudo/sudo.log"
    Defaults	log_input,log_output
```
- Enable TTY mode
```
    Defaults        requiretty
```
- Paths that can be used by sudo
```
    Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
```
###  Bash script & Cronjob
- <a href="https://github.com/mtellami/born2beroot/blob/main/monitoring.sh">monitoring.sh</a>
- open cronjob
```
    $ sudo crontab -e
```
- add this line
```
    */10 * * * * /usr/local/bin/monitoring.sh
```

