# Atividade 20/04:
# Subir 3 VM's usando Vagrant, definir redes personalizadas.
# 1 - servidor com CentOS rodando backend   -> Rede IP 172.72.72.10
# 2 - servidor com ubuntu rodando frontend  -> IP 172.72.72.20
# 3 - Windows com Wireshark                 -> IP 172.72.72.30

Vagrant.configure("2") do |config|
  config.vm.box = "ubuntu/xenial64"
  config.vm.define "recuperacao"
  config.vm.network "private_network", ip: "172.72.72.20"
   config.vm.provider "virtualbox" do |vb|
     vb.memory = "1024"
     vb.cpus = "1"
     vb.name = "recuperacao"
end
end

