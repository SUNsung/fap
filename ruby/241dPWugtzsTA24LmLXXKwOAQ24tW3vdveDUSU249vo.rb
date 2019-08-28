
        
            # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
    class Devise::SessionsController < DeviseController
  prepend_before_action :require_no_authentication, only: [:new, :create]
  prepend_before_action :allow_params_authentication!, only: :create
  prepend_before_action :verify_signed_out_user, only: :destroy
  prepend_before_action(only: [:create, :destroy]) { request.env['devise.skip_timeout'] = true }
    
      # GET /resource/unlock/new
  def new
    self.resource = resource_class.new
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
          def initialize_from_record(record)
        @scope_name = Devise::Mapping.find_scope!(record)
        @resource   = instance_variable_set('@#{devise_mapping.name}', record)
      end
    
          if options[:skip_helpers] == true
        @used_helpers = @used_routes
      elsif skip = options[:skip_helpers]
        @used_helpers = self.routes - Array(skip).map(&singularizer)
      else
        @used_helpers = self.routes
      end
    end
  end
end

    
              if recoverable.persisted?
            if recoverable.reset_password_period_valid?
              recoverable.reset_password(attributes[:password], attributes[:password_confirmation])
            else
              recoverable.errors.add(:reset_password_token, :expired)
            end
          end
    
          def default_handler(event, *args)
        @event += event
      end
    
      it 'increments position' do
    gz = Zlib::GzipReader.new @io
    (0..@data.size).each do |i|
      gz.pos.should == i
      gz.getc
    end
  end
    
      it 'returns an enumerator, which yields each byte in the stream, when no block is passed' do
    enum = @gzreader.send(@method)
    
        describe 'with an integer' do
      it 'appends the corresponding character to the stream' do
        @gz.ungetc 0x21
        @gz.read.should == '!'
      end
    
      def options
    { :concurrency => 3, :queues => ['default'] }
  end
    
      class SpecificJidWorker
    include Sidekiq::Worker
    sidekiq_class_attribute :count
    self.count = 0
    def perform(worker_jid)
      return unless worker_jid == self.jid
      self.class.count += 1
    end
  end
    
    # Determine default value of a given easy_install's option
def easy_install_default(python_bin, option)
  result = nil
  execmd({:PYTHONPATH=>'#{example_dir}'}, python_bin, :stderr=>false) do |stdin,stdout|
    stdin.write('from easy_install_default import default_options\n' \
                'print default_options.#{option}\n')
    stdin.close
    result = stdout.read.chomp
  end
  return result
end
    
          it 'should have the custom name' do
        pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
        insist { input.name } == 'custom-name'
      end
    
    # Now, add our init-scripts, systemd services, and so on:
pleaserun = package.convert(FPM::Package::PleaseRun)
pleaserun.input ['/usr/bin/my-executable', '--foo-from', 'bar']
    
        # Some older behavior, if you specify:
    #   'fpm -s dir -t ... -C somepath'
    # fpm would assume you meant to add '.' to the end of the commandline.
    # Let's hack that. https://github.com/jordansissel/fpm/issues/187
    if input_type == 'dir' and args.empty? and !chdir.nil?
      logger.info('No args, but -s dir and -C are given, assuming '.' as input')
      args << '.'
    end
    
        # Parse 'epoch:version-iteration' in the version string
    version_re = /^(?:([0-9]+):)?(.+?)(?:-(.*))?$/
    m = version_re.match(control['pkgver'][0])
    if !m
      raise 'Unsupported version string '#{control['pkgver'][0]}''
    end
    self.epoch, self.version, self.iteration = m.captures
    
      def output(output_path)
    output_check(output_path)
    
        # Copy 'files' from builddir to :output/files
    Find.find('files', 'manifests') do |path|
      logger.info('Copying path: #{path}')
      if File.directory?(path)
        ::Dir.mkdir(File.join(params[:output], path))
      else
        FileUtils.cp(path, File.join(params[:output], path))
      end
    end
  end # def build!
    
      def output(output_path)
    create_scripts