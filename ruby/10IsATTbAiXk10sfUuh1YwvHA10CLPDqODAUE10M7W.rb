
        
          task :rollback_release_path do
    on release_roles(:all) do
      releases = capture(:ls, '-xt', releases_path).split
      if releases.count < 2
        error t(:cannot_rollback)
        exit 1
      end
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
    Given(/^the configuration is in a custom location$/) do
  TestApp.move_configuration_to_custom_location('app')
end
    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
        def add_filter(filter=nil, &block)
      if block
        raise ArgumentError, 'Both a block and an object were given' if filter
    
          def netssh_options
        @netssh_options ||= super.merge(fetch(:ssh_options) || {})
      end
    
          def fetch_primary(role)
        hosts = roles_for([role])
        hosts.find(&:primary) || hosts.first
      end
    
          it 'Does not render below article variant when no variants published' do
        html_variant = create(:html_variant, published: false, approved: true, group: 'article_show_below_article_cta')
        get article.path + '?variant_version=0'
        expect(response.body).not_to include html_variant.html
      end
    
      def satellite_tweet!
    @article.tags.find_each do |tag|
      BufferUpdate.buff!(@article.id, twitter_buffer_text, tag.buffer_profile_id_code, 'twitter', tag.id) if tag.buffer_profile_id_code.present?
    end
    @article.update(last_buffered: Time.current)
  end
    
      def update
    prevent_request_if_requested_twice
    @user = current_user
    @user.assign_attributes(user_params)
    @errors = []
    confirm_presence
    respond_to do |format|
      if @invalid_form
        render :edit
        return
      end
    
      it 'can display a single scheduled job' do
    params = add_scheduled
    get '/scheduled/0-shouldntexist'
    assert_equal 302, last_response.status
    get '/scheduled/#{job_params(*params)}'
    assert_equal 200, last_response.status
    assert_match(/HardWorker/, last_response.body)
  end
    
          q.clear
      assert SetWorker.perform_async(1)
      assert_equal 0, q.size
    
        assert_nil dead_set.find_job('000103')
    assert dead_set.find_job('000102')
    assert dead_set.find_job('000101')
  end
    
    end

    
      it 'logs large payloads' do
    output = capture_logging(Logger::WARN) do
      SomeClass.delay.doit('a' * 8192)
    end
    assert_match(/#{SomeClass}.doit job argument is/, output)
  end
    
          msg['locale'] = 'jp'
      I18n.locale = I18n.default_locale
      assert_equal :en, I18n.locale
      mw = Sidekiq::Middleware::I18n::Server.new
      mw.call(nil, msg, nil) do
        assert_equal :jp, I18n.locale
      end
      assert_equal :en, I18n.locale
    end
    
          e = assert_raises ArgumentError do
        Sidekiq.on(:startp)
      end
      assert_match(/Invalid event name/, e.message)
      e = assert_raises ArgumentError do
        Sidekiq.on('startup')
      end
      assert_match(/Symbols only/, e.message)
      Sidekiq.on(:startup) do
        1 + 1
      end
    
        if input_type == 'pleaserun'
      # Special case for pleaserun that all parameters are considered the 'command'
      # to run through pleaserun.
      input.input(args)
    else
      # Each remaining command line parameter is used as an 'input' argument.
      # For directories, this means paths. For things like gem and python, this
      # means package name or paths to the packages (rails, foo-1.0.gem, django,
      # bar/setup.py, etc)
      args.each do |arg|
        input.input(arg)
      end
    end
    
      # Clean up any temporary storage used by this class.
  def cleanup
    cleanup_staging
    cleanup_build
  end # def cleanup
    
      option '--origin', 'ABI',
         'Sets the FreeBSD 'origin' pkg field',
         :default => 'fpm/<name>'
    
      public(:input)
end # class FPM::Package::PleaseRun

    
        # easy_install will put stuff in @tmpdir/packagename/, so find that:
    #  @tmpdir/somepackage/setup.py
    dirs = ::Dir.glob(File.join(target, '*'))
    if dirs.length != 1
      raise 'Unexpected directory layout after easy_install. Maybe file a bug? The directory is #{build_path}'
    end
    return dirs.first
  end # def download
    
      def migration_name
    'add_attachment_#{attachment_names.join('_')}_to_#{name.underscore.pluralize}'
  end
    
        def add_active_record_callbacks
      name = @name
      @klass.send(:after_save) { send(name).send(:save) }
      @klass.send(:before_destroy) { send(name).send(:queue_all_for_delete) }
      if @klass.respond_to?(:after_commit)
        @klass.send(:after_commit, on: :destroy) do
          send(name).send(:flush_deletes)
        end
      else
        @klass.send(:after_destroy) { send(name).send(:flush_deletes) }
      end
    end
    
        desc 'version', 'Show Bourbon version'
    def version
      say 'Bourbon #{Bourbon::VERSION}'
    end
    
          expect('.border-width-implied-left').to have_rule(rule)
    end
  end
    
      context 'called with four sizes' do
    it 'applies different widths to all sides' do
      rule = 'padding: 7px 8px 9px 10px'