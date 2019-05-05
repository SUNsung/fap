
        
        require_relative '../lib/bootstrap/environment'
    
        def validate_plugins!
      @plugins_to_package.each do |plugin_name|
        if INVALID_PLUGINS_TO_EXPLICIT_PACK.any? { |invalid_name| plugin_name =~ invalid_name }
          raise UnpackablePluginError, 'Cannot explicitly pack `#{plugin_name}` for offline installation'
        end
      end
    end
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
    desc 'Set up _deploy folder and deploy branch for Github Pages deployment'
task :setup_github_pages, :repo do |t, args|
  if args.repo
    repo_url = args.repo
  else
    puts 'Enter the read/write url for your repository'
    puts '(For example, 'git@github.com:your_username/your_username.github.io.git)'
    puts '           or 'https://github.com/your_username/your_username.github.io')'
    repo_url = get_stdin('Repository url: ')
  end
  protocol = (repo_url.match(/(^git)@/).nil?) ? 'https' : 'git'
  if protocol == 'git'
    user = repo_url.match(/:([^\/]+)/)[1]
  else
    user = repo_url.match(/github\.com\/([^\/]+)/)[1]
  end
  branch = (repo_url.match(/\/[\w-]+\.github\.(?:io|com)/).nil?) ? 'gh-pages' : 'master'
  project = (branch == 'gh-pages') ? repo_url.match(/([^\/]+?)(\.git|$)/i)[1] : ''
  unless (`git remote -v` =~ /origin.+?octopress(?:\.git)?/).nil?
    # If octopress is still the origin remote (from cloning) rename it to octopress
    system 'git remote rename origin octopress'
    if branch == 'master'
      # If this is a user/organization pages repository, add the correct origin remote
      # and checkout the source branch for committing changes to the blog source.
      system 'git remote add origin #{repo_url}'
      puts 'Added remote #{repo_url} as origin'
      system 'git config branch.master.remote origin'
      puts 'Set origin as default remote'
      system 'git branch -m master source'
      puts 'Master branch renamed to 'source' for committing your blog source files'
    else
      unless !public_dir.match('#{project}').nil?
        system 'rake set_root_dir[#{project}]'
      end
    end
  end
  url = blog_url(user, project, source_dir)
  jekyll_config = IO.read('_config.yml')
  jekyll_config.sub!(/^url:.*$/, 'url: #{url}')
  File.open('_config.yml', 'w') do |f|
    f.write jekyll_config
  end
  rm_rf deploy_dir
  mkdir deploy_dir
  cd '#{deploy_dir}' do
    system 'git init'
    system 'echo 'My Octopress Page is coming soon &hellip;' > index.html'
    system 'git add .'
    system 'git commit -m \'Octopress init\''
    system 'git branch -m gh-pages' unless branch == 'master'
    system 'git remote add origin #{repo_url}'
    rakefile = IO.read(__FILE__)
    rakefile.sub!(/deploy_branch(\s*)=(\s*)([''])[\w-]*['']/, 'deploy_branch\\1=\\2\\3#{branch}\\3')
    rakefile.sub!(/deploy_default(\s*)=(\s*)([''])[\w-]*['']/, 'deploy_default\\1=\\2\\3push\\3')
    File.open(__FILE__, 'w') do |f|
      f.write rakefile
    end
  end
  puts '\n---\n## Now you can deploy to #{repo_url} with `rake deploy` ##'
end
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
      # Improved version of Liquid's truncatewords:
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncatewords(input, length)
    truncate = input.split(' ')
    if truncate.length > length
      truncate[0..length-1].join(' ').strip + ' &hellip;'
    else
      input
    end
  end
    
      def edit
    @organization_obj = current_user.organizations_scope.find(organization.id)
  end
    
      before_action { @server = organization.servers.present.find_by_permalink!(params[:server_id]) }
  before_action { params[:id] && @route = @server.routes.find_by_uuid!(params[:id]) }
    
      def safe_params(*extras)
    params.require(:server).permit(:name, :mode, :ip_pool_id, *extras)
  end
    
      layout 'sub'
    
      def make_owner
    if @user.is_a?(User)
      organization.make_owner(@user)
      redirect_to_with_json [organization, :users], :notice => '#{@user.name} is now the owner of this organization.'
    else
      raise Postal::Error, 'User must be a User not a UserInvite to make owner'
    end
  end
    
          http_endpoints = server.http_endpoints.order(:name).to_a
      if http_endpoints.present?
        s << '<optgroup label='HTTP Endpoints'>'
        for endpoint in http_endpoints
          value = '#{endpoint.class}##{endpoint.uuid}'
          selected = value == selected_value ? 'selected='selected'' : ''
          s << '<option value='#{value}' #{selected}>#{endpoint.description}</option>'
        end
        s << '</optgroup>'
      end
    
    require 'rubygems'
require 'bundler/setup'
    
        it 'allows finding elements and extracting attributes from them' do
      expect(string.find('//h1')[:data]).to eq('fantastic')
    end