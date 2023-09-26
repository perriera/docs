
## How to create a Vue app on Ubuntu 22.x

>
|use case (purpose)|  
|--|
|**Given** we need to be able to install Vue and related tools 
|**when** install @vue/cli and @vue/cli-service using npm  
|**then** the ability to create Vue apps

### Prerequisites 
1. Ubuntu installed
2. Access to the Internet
4. node installed
5. npm installed

### Wish Case
	npm install -g @vue/cli
	npm install @vue/cli-service
	source ~/.bashrc
	vue create -d my-first-vue-app
	cd my-first-vue-app
	npx vue-cli-service serve --open
	

**Alternate Case**
Removing Vue

	npm remove @vue/cli-service
	npm remove -g @vue/cli
	source ~/.bashrc
	
**Summary**
This guide assumes that you have npm installed