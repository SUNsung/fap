
        
            # Is used to look if the method is implemented as an action
    def method_missing(method_sym, *arguments, &_block)
      self.runner.trigger_action_by_name(method_sym, nil, false, *arguments)
    end
    
        def run(action_named: nil, action_class_ref: nil, parameter_map: nil)
      action_return = runner.execute_action(action_named, action_class_ref, [parameter_map], custom_dir: '.')
      return action_return
    end
    
          it 'logs the command if verbose' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'foo.bar')
          end').runner.execute(:test)
        end
      end
    
            allow(File).to receive(:file?).and_return(false)
        expect(File).to receive(:file?).with('#{Dir.home}/Library/Keychains/login.keychain').and_return(true)
        allow(File).to receive(:exist?).and_return(false)
        expect(File).to receive(:exist?).with('item.path').and_return(true)
    
    platforms :ruby do
  gem 'sqlite3'
end
    
      # constant-time comparison algorithm to prevent timing attacks
  def self.secure_compare(a, b)
    return false if a.blank? || b.blank? || a.bytesize != b.bytesize
    l = a.unpack 'C#{a.bytesize}'
    
                bypass_sign_in(user)
          DEPRECATION
          warden.session_serializer.store(resource, scope)
        elsif warden.user(scope) == resource && !options.delete(:force)
          # Do nothing. User already signed in and we are not forcing it.
          true
        else
          warden.set_user(resource, options.merge!(scope: scope))
        end
      end
    
    module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
      # Setup a color scheme called 'bright' than can be used to add color codes
  # to the pattern layout. Color schemes should only be used with appenders
  # that write to STDOUT or STDERR; inserting terminal color codes into a file
  # is generally considered bad form.
  Logging.color_scheme('bright',
                       levels:  {
                         info:  :green,
                         warn:  :yellow,
                         error: :red,
                         fatal: %i(white on_red)
                       },
                       date:    :blue,
                       logger:  :cyan,
                       message: :magenta
                      )
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
      describe '#create' do
    let(:stranger) { FactoryGirl.create(:user) }
    
          !File.exists?(File.join(LogStash::Environment::LOGSTASH_HOME, 'x-pack'))
    end
    
          explicit_path = ::File.join(temp_path, LOGSTASH_DIR)
      dependencies_path = ::File.join(temp_path, DEPENDENCIES_DIR)
    
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
    
        context 'when using an obsolete settings from the parent class' do
      it 'should cause a configuration error' do
        expect {
          plugin_class.new('debug' => true)
        }.to raise_error(LogStash::ConfigurationError)
      end
    end
    
      it 'returns the pipeline id' do
    expect(subject.pipeline_id).to eq(pipeline_id)
  end
    
    desc 'Default deploy task'
task :deploy do
  # Check if preview posts exist, which should not be published
  if File.exists?('.preview-mode')
    puts '## Found posts in preview mode, regenerating files ...'
    File.delete('.preview-mode')
    Rake::Task[:generate].execute
  end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
    Liquid::Template.register_tag('config_tag', ConfigTag)
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end
    
    module Jekyll
    
    # Multi-line step scoper
When /^(.*) within (.*[^:]):$/ do |step, parent, table_or_string|
  with_scope(parent) { When '#{step}:', table_or_string }
end
    
      def self.source_root
    @source_root ||= File.expand_path('../templates', __FILE__)
  end
    
    # The base module that gets included in ActiveRecord::Base. See the
# documentation for Paperclip::ClassMethods for more useful information.
module Paperclip
  extend Helpers
  extend Logger
  extend ProcessorHelpers
    
        private
    
        # scale to the requested geometry and preserve the aspect ratio
    def scale_to(new_geometry)
      scale = [new_geometry.width.to_f / self.width.to_f , new_geometry.height.to_f / self.height.to_f].min
      Paperclip::Geometry.new((self.width * scale).round, (self.height * scale).round)
    end
  end
end
