
        
                  def render_collection_for(builder_class, &block)
            options = @options.stringify_keys
            rendered_collection = render_collection do |item, value, text, default_html_options|
              builder = instantiate_builder(builder_class, item, value, text, default_html_options)
    
              # Determines whether the current action has a layout definition by
          # checking the action name against the :only and :except conditions
          # set by the <tt>layout</tt> method.
          #
          # ==== Returns
          # * <tt>Boolean</tt> - True if the action has a layout definition, false otherwise.
          def _conditional_layout?
            return unless super
    
    def local_require
  require 'json'
  JSON.pretty_generate(DATA)
end
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    Given(%r!^I have the following (draft|post)s? within the '(.*)' directory:$!) do |type, folder, table|
  table.hashes.each do |input_hash|
    title = slug(input_hash['title'])
    parsed_date = Time.xmlschema(input_hash['date']) rescue Time.parse(input_hash['date'])
    
        # Private: The list of existing files, apart from those included in
    # keep_files and hidden files.
    #
    # Returns a Set with the file paths
    def existing_files
      files = Set.new
      regex = keep_file_regex
      dirs = keep_dirs
    
        # Read the allowed documents into the collection's array of docs.
    #
    # Returns the sorted array of docs.
    def read
      filtered_entries.each do |file_path|
        full_path = collection_dir(file_path)
        next if File.directory?(full_path)
        if Utils.has_yaml_header? full_path
          read_document(full_path)
        else
          read_static_file(file_path, full_path)
        end
      end
      docs.sort!
    end
    
          # Run Site#process and catch errors
      #
      # site - the Jekyll::Site object
      #
      # Returns nothing
      def process_site(site)
        site.process
      rescue Jekyll::Errors::FatalException => e
        Jekyll.logger.error 'ERROR:', 'YOUR SITE COULD NOT BE BUILT:'
        Jekyll.logger.error '', '------------------------------------'
        Jekyll.logger.error '', e.message
        exit(1)
      end
    
    puts('[WARNING] You are calling #{tool_name} directly. Usage of the tool name without the `fastlane` prefix is deprecated in fastlane 2.0'.yellow)
puts('Please update your scripts to use `fastlane #{tool_name} #{full_params}` instead.'.yellow)
    
      let(:options) do
    # A typical options hash expected from Deliver::DetectValues
    {
      username: 'bill@acme.com',
      ipa: 'ACME.ipa',
      app_identifier: 'com.acme.acme',
      app_version: '1.0.7',
      app: double('app', { apple_id: 'YI8C2AS' }),
      platform: 'ios'
    }
  end
    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :public_key,
                                       env_name: 'APPETIZE_PUBLICKEY',
                                       description: 'Public key of the app you wish to update',
                                       is_string: true,
                                       sensitive: true,
                                       default_value: Actions.lane_context[SharedValues::APPETIZE_PUBLIC_KEY],
                                       default_value_dynamic: true,
                                       optional: false,
                                       verify_block: proc do |value|
                                         if value.start_with?('private_')
                                           UI.user_error!('You provided a private key to appetize, please provide the public key')
                                         end
                                       end),
          FastlaneCore::ConfigItem.new(key: :base_url,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_BASE',
                                       description: 'Base URL of Appetize service',
                                       is_string: true,
                                       default_value: 'https://appetize.io/embed',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :device,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_DEVICE',
                                       description: 'Device type: iphone4s, iphone5s, iphone6, iphone6plus, ipadair, iphone6s, iphone6splus, ipadair2, nexus5, nexus7 or nexus9',
                                       is_string: true,
                                       default_value: 'iphone5s'),
          FastlaneCore::ConfigItem.new(key: :scale,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_SCALE',
                                       description: 'Scale of the simulator',
                                       is_string: true,
                                       optional: true,
                                       verify_block: proc do |value|
                                         available = ['25', '50', '75', '100']
                                         UI.user_error!('Invalid scale, available: #{available.join(', ')}') unless available.include?(value)
                                       end),
          FastlaneCore::ConfigItem.new(key: :orientation,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_ORIENTATION',
                                       description: 'Device orientation',
                                       is_string: true,
                                       default_value: 'portrait',
                                       verify_block: proc do |value|
                                         available = ['portrait', 'landscape']
                                         UI.user_error!('Invalid device, available: #{available.join(', ')}') unless available.include?(value)
                                       end),
          FastlaneCore::ConfigItem.new(key: :language,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_LANGUAGE',
                                       description: 'Device language in ISO 639-1 language code, e.g. 'de'',
                                       is_string: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :color,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_COLOR',
                                       description: 'Color of the device',
                                       is_string: true,
                                       default_value: 'black',
                                       verify_block: proc do |value|
                                         available = ['black', 'white', 'silver', 'gray']
                                         UI.user_error!('Invalid device color, available: #{available.join(', ')}') unless available.include?(value)
                                       end),
          FastlaneCore::ConfigItem.new(key: :launch_url,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_LAUNCH_URL',
                                       description: 'Specify a deep link to open when your app is launched',
                                       is_string: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :os_version,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_OS_VERSION',
                                       description: 'The operating system version on which to run your app, e.g. 10.3, 8.0',
                                       is_string: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :params,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_PARAMS',
                                       description: 'Specifiy params value to be passed to Appetize',
                                       is_string: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :proxy,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_PROXY',
                                       description: 'Specify a HTTP proxy to be passed to Appetize',
                                       is_string: true,
                                       optional: true)
        ]
      end
    
            # Check if an output path was given
        if params_hash[:output]
          Actions.lane_context[SharedValues::APPLEDOC_DOCUMENTATION_OUTPUT] = File.expand_path(params_hash[:output])
          create_output_dir_if_not_exists(params_hash[:output])
        end
    
            # Upload a file to the remote machine.
        #
        # @param [String] from Path of the file locally to upload.
        # @param [String] to Path of where to save the file on the remote
        #   machine.
        def upload(from, to)
        end
    
            # Helper method that will set a value if a value is given, or otherwise
        # return the already set value.
        #
        # @param [Symbol] key Key for the data
        # @param [Object] value Value to store.
        # @return [Object] Stored value.
        def self.get_or_set(key, value=UNSET_VALUE)
          # If no value is to be set, then return the value we have already set
          return data[key] if value.eql?(UNSET_VALUE)
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                # Don't set the value if it is the unset value, either.
                value = obj.instance_variable_get(key)
                result.instance_variable_set(key, value) if value != UNSET_VALUE
              end
            end
          end
    
            # This returns all the config classes for the various pushes.
        #
        # @return [Registry]
        def push_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:push])
            end
          end
        end
    
    source 'https://rubygems.org'
    
        pod 'Alamofire', path: '../Alamofire Example/Alamofire'
    
      # Indicates an user error. This is defined in cocoapods-core.
  #
  class Informative < PlainInformative
    def message
      '[!] #{super}'.red
    end
  end
    
        it 'registers an offense for one object method hash parameter with ' \
       'braces' do
      expect_offense(<<-RUBY.strip_indent)
        x.func({ y: 'z' })
               ^^^^^^^^^^ Redundant curly braces around a hash parameter.
      RUBY
    end
    
    shared_examples_for 'multiline literal brace layout' do
  include MultilineLiteralBraceHelper
    
        def self.reset_pwd
      @pwd = nil
    end
    
        it 'matches dir/** for hidden file' do
      expect(described_class.match_path?('dir/**', 'dir/.hidden_file'))
        .to be(true)
      expect($stderr.string).to eq('')
    end
    
            def autocorrect(node)
          if style == :each
            autocorrect_to_each(node)
          else
            autocorrect_to_for(node)
          end
        end
    
    require 'bundler'
require 'bundler/gem_tasks'
begin
  Bundler.setup(:default, :development)
rescue Bundler::BundlerError => e
  warn e.message
  warn 'Run `bundle install` to install missing gems'
  exit e.status_code
end
require 'rake'
require 'rspec/core'
require 'rspec/core/rake_task'
require 'rubocop/rake_task'
    
          # Returns the collection the `for` loop is iterating over.
      #
      # @return [Node] The collection the `for` loop is iterating over
      def collection
        node_parts[1]
      end
    
          # Chacks whether the `if` node has nested `if` nodes in any of its
      # branches.
      #
      # @note This performs a shallow search.
      #
      # @return [Boolean] whether the `if` node contains nested conditionals
      def nested_conditional?
        node_parts[1..2].compact.each do |branch|
          branch.each_node(:if) do |nested|
            return true unless nested.elsif?
          end
        end