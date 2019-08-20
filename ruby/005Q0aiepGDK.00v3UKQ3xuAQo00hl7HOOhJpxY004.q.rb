
        
            @posts_per_day = Post.where('created_at >= ?', Date.today - 21.days).group('DATE(created_at)').order('DATE(created_at) ASC').count
    @most_posts_within = @posts_per_day.values.max.to_f
    
          def fetch_public_key(o_auth_app, jwt)
        public_key = fetch_public_key_from_json(o_auth_app.jwks, jwt)
        if public_key.empty? && o_auth_app.jwks_uri
          response = Faraday.get(o_auth_app.jwks_uri)
          public_key = fetch_public_key_from_json(response.body, jwt)
        end
        raise Rack::OAuth2::Server::Authorize::BadRequest(:unauthorized_client) if public_key.empty?
        public_key
      end
    
        if message.save
      logger.info 'event=create type=message user=#{current_user.diaspora_handle} status=success ' \
                  'message=#{message.id} chars=#{params[:message][:text].length}'
      Diaspora::Federation::Dispatcher.defer_dispatch(current_user, message)
    else
      flash[:error] = I18n.t('conversations.new_conversation.fail')
    end
    redirect_to conversations_path(:conversation_id => conversation.id)
  end
end

    
        it 'handles symbols and strings' do
      q = Sidekiq::Queue.new('bar')
      assert_equal 0, q.size
      assert SetWorker.set('queue' => 'bar', :retry => 11).perform_async(1)
      job = q.first
      assert_equal 'bar', job['queue']
      assert_equal 11, job['retry']
    
        describe 'enqueued' do
      it 'handles latency for good jobs' do
        Sidekiq.redis do |conn|
          conn.rpush 'queue:default', '{\'enqueued_at\': #{Time.now.to_f}}'
          conn.sadd 'queues', 'default'
        end
        s = Sidekiq::Stats.new
        assert s.default_queue_latency > 0
        q = Sidekiq::Queue.new
        assert q.latency > 0
      end
    
        assert_equal dead_set.find_job('123123').value, serialized_job
  end
    
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
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
      describe '#vendor' do
    it_behaves_like :Default, description.gsub(/^#/, '').to_sym, 'none'
    it_behaves_like :Mutator, description.gsub(/^#/, '').to_sym
  end
    
      private
  # return the identifier by prepending the reverse-domain prefix
  # to the package name, else return just the name
  def identifier
    identifier = name.dup
    if self.attributes[:osxpkg_identifier_prefix]
      identifier.insert(0, '#{self.attributes[:osxpkg_identifier_prefix]}.')
    end
    identifier
  end # def identifier
    
        File.write(build_path('description'), self.description + '\n')
    
      private
  def input(command)
    platforms = [
      ::PleaseRun::Platform::Systemd.new('default'), # RHEL 7, Fedora 19+, Debian 8, Ubuntu 16.04
      ::PleaseRun::Platform::Upstart.new('1.5'), # Recent Ubuntus
      ::PleaseRun::Platform::Upstart.new('0.6.5'), # CentOS 6
      ::PleaseRun::Platform::Launchd.new('10.9'), # OS X
      ::PleaseRun::Platform::SYSV.new('lsb-3.1') # Ancient stuff
    ]
    pleaserun_attributes = [ 'chdir', 'user', 'group', 'umask', 'chroot', 'nice', 'limit_coredump',
                             'limit_cputime', 'limit_data', 'limit_file_size', 'limit_locked_memory',
                             'limit_open_files', 'limit_user_processes', 'limit_physical_memory', 'limit_stack_size',
                             'log_directory', 'log_file_stderr', 'log_file_stdout']
    
          File.open(File.join(builddir, 'manifests', manifest), 'w') do |f|
        logger.info('manifest: #{f.path}')
        template = template(File.join('puppet', '#{manifest}.erb'))
        ::Dir.chdir(fileroot) do
          f.puts template.result(binding)
        end
      end
    end
  end # def generate_specfile