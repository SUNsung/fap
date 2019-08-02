
        
        class Devise::ConfirmationsController < DeviseController
  # GET /resource/confirmation/new
  def new
    self.resource = resource_class.new
  end
    
      def respond_to_on_destroy
    # We actually need to hardcode this as Rails default responder doesn't
    # support returning empty response on GET request
    respond_to do |format|
      format.all { head :no_content }
      format.any(*navigational_formats) { redirect_to after_sign_out_path_for(resource_name) }
    end
  end
end

    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
          def extract_path_from_location(location)
        uri = parse_uri(location)
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
              if mod.const_defined?('ClassMethods')
            class_mod = mod.const_get('ClassMethods')
            extend class_mod
    
          # Resets reset password token and send reset password instructions by email.
      # Returns the token sent in the e-mail.
      def send_reset_password_instructions
        token = set_reset_password_token
        send_reset_password_instructions_notification(token)
    
            # The token is only valid if:
        # 1. we have a date
        # 2. the current time does not pass the expiry period
        # 3. the record has a remember_created_at date
        # 4. the token date is bigger than the remember_created_at
        # 5. the token matches
        generated_at.is_a?(Time) &&
         (self.class.remember_for.ago < generated_at) &&
         (generated_at > (remember_created_at || Time.now).utc) &&
         Devise.secure_compare(rememberable_value, token)
      end
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
          before do
        subject.perform
      end
    
          context 'reserved_username?' do
        let(:reserved_username) { true }
    
        it 'returns http forbidden' do
      expect(response).to have_http_status(403)
    end
  end
    
    class DisallowedHashtagsValidator < ActiveModel::Validator
  def validate(status)
    return unless status.local? && !status.reblog?
    
      it { is_expected.to change(Notification, :count).by(1) }
    
      before { allow(controller).to receive(:doorkeeper_token) { token } }
    
            it 'creates a reblog by sender of status' do
          expect(sender.statuses.count).to eq 2
        end
      end
    
          def initialize(spec, used_by_non_library_targets_only, source)
        @spec = spec
        @used_by_non_library_targets_only = used_by_non_library_targets_only
        @source = source
      end
    
    module Pod
  describe XCConfigIntegrator = Installer::UserProjectIntegrator::TargetIntegrator::XCConfigIntegrator do
    before do
      project_path = SpecHelper.create_sample_app_copy_from_fixture('SampleProject')
      @project = Xcodeproj::Project.open(project_path)
      Project.new(config.sandbox.project_path).save
      @target = @project.targets.first
      target_definition = Podfile::TargetDefinition.new('Pods', nil)
      target_definition.abstract = false
      @pod_bundle = AggregateTarget.new(config.sandbox, false, {}, [], Platform.ios, target_definition, project_path.dirname, @project, [@target.uuid], {})
      configuration = Xcodeproj::Config.new(
        'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) COCOAPODS=1',
      )
      @pod_bundle.xcconfigs['Debug'] = configuration
      @pod_bundle.xcconfigs['Test'] = configuration
      @pod_bundle.xcconfigs['Release'] = configuration
      @pod_bundle.xcconfigs['App Store'] = configuration
    end
    
            # @return [Project] Generated and prepared project.
        #
        def generate!
          project = create_project(path, object_version, pod_target_subproject)
          prepare(sandbox, project, pod_targets, build_configurations, platforms, podfile_path)
          project
        end
    
            self.indentation_level += 2
        @treat_titles_as_messages = true
        yield if block_given?
      ensure
        @treat_titles_as_messages = false
        self.indentation_level -= 2
      end
    
        def cache_key_for_products
      count = @products.count
      max_updated_at = (@products.maximum(:updated_at) || Date.today).to_s(:number)
      products_cache_keys = 'spree/products/all-#{params[:page]}-#{max_updated_at}-#{count}'
      (common_product_cache_keys + [products_cache_keys]).compact.join('/')
    end
    
        def collect_backend_payment_methods
      PaymentMethod.available_on_back_end.select { |pm| pm.available_for_order?(self) }
    end
    
        def create_payment_profile
      # Don't attempt to create on bad payments.
      return if has_invalid_state?
      # Payment profile cannot be created without source
      return unless source
      # Imported payments shouldn't create a payment profile.
      return if source.imported
    
          it 'renders to appropriate page if user changes username twice and go to middle username' do
        user.update(username: 'new_hotness_#{rand(10_000)}')
        middle_username = user.username
        user.update(username: 'new_new_username_#{rand(10_000)}')
        get '/#{middle_username}/#{article.slug}'
        expect(response.body).to redirect_to('/#{user.username}/#{article.slug}')
      end
    end
    
      private
    
        it 'can start and stop' do
      f = Sidekiq::Processor.new(Mgr.new)
      f.terminate
    end
    
    __END__
    
    desc 'copy dot files for deployment'
task :copydot, :source, :dest do |t, args|
  FileList['#{args.source}/**/.*'].exclude('**/.', '**/..', '**/.DS_Store', '**/._*').each do |file|
    cp_r file, file.gsub(/#{args.source}/, '#{args.dest}') unless File.directory?(file)
  end
end
    
        # Initializes a new CategoryFeed.
    #
    #  +base+         is the String path to the <source>.
    #  +category_dir+ is the String path between <source> and the category folder.
    #  +category+     is the category currently being processed.
    def initialize(site, base, category_dir, category)
      @site = site
      @base = base
      @dir  = category_dir
      @name = 'atom.xml'
      self.process(@name)
      # Read the YAML data from the layout page.
      self.read_yaml(File.join(base, '_includes/custom'), 'category_feed.xml')
      self.data['category']    = category
      # Set the title for this page.
      title_prefix             = site.config['category_title_prefix'] || 'Category: '
      self.data['title']       = '#{title_prefix}#{category}'
      # Set the meta-description for this page.
      meta_description_prefix  = site.config['category_meta_description_prefix'] || 'Category: '
      self.data['description'] = '#{meta_description_prefix}#{category}'
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end
    
    is_travis = ENV['TRAVIS_OS_NAME'] && !ENV['TRAVIS_OS_NAME'].empty?
    
        it 'should escape '%' characters in filenames while preserving permissions' do
      Dir.mkdir(subject.staging_path('/example'))
      File.write(subject.staging_path('/example/%name%'), 'Hello')
      File.chmod(01777,subject.staging_path('/example/%name%'))
      subject.attributes[:rpm_use_file_permissions?] = true
      subject.output(@target)
    
        settings['prefix'] = staging_path(attributes[:prefix])
    FileUtils.mkdir_p(settings['prefix'])
    
        File.write(build_path('description'), self.description + '\n')
    
      # Helper for user lookup
  def uid2user(uid)
    begin
      pwent = Etc.getpwuid(uid)
      return pwent.name
    rescue ArgumentError => e
      # Invalid user id? No user? Return the uid.
      logger.warn('Failed to find username for uid #{uid}')
      return uid.to_s
    end
  end # def uid2user
    
    
    # Convert the 'package directory' built above to a real solaris package.
    safesystem('pkgtrans', '-s', build_path, output_path, name)
    safesystem('cp', '#{build_path}/#{output_path}', output_path)
  end # def output
    
        def synchronize
      yaml['synchronize'] || false
    end
    
          # $TMUXINATOR_CONFIG (and create directory) or ''.
      def environment
        environment = ENV['TMUXINATOR_CONFIG']
        return '' if environment.to_s.empty? # variable is unset (nil) or blank
        FileUtils::mkdir_p(environment) unless File.directory?(environment)
        environment
      end
    
          it 'returns default-path' do
        expect(described_class.default_path_option).to eq 'default-path'
      end
    end
  end