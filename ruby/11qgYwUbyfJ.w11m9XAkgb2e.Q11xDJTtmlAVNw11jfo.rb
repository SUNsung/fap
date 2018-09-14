
        
              # Creates a file upload field. If you are using file uploads then you will also need
      # to set the multipart option for the form tag:
      #
      #   <%= form_tag '/upload', multipart: true do %>
      #     <label for='file'>File to Upload</label> <%= file_field_tag 'file' %>
      #     <%= submit_tag %>
      #   <% end %>
      #
      # The specified URL will then be passed a File object containing the selected file, or if the field
      # was left blank, a StringIO object.
      #
      # ==== Options
      # * Creates standard HTML attributes for the tag.
      # * <tt>:disabled</tt> - If set to true, the user will not be able to use this input.
      # * <tt>:multiple</tt> - If set to true, *in most updated browsers* the user will be allowed to select multiple files.
      # * <tt>:accept</tt> - If set to one or multiple mime-types, the user will be suggested a filter when choosing a file. You still need to set up model validations.
      #
      # ==== Examples
      #   file_field_tag 'attachment'
      #   # => <input id='attachment' name='attachment' type='file' />
      #
      #   file_field_tag 'avatar', class: 'profile_input'
      #   # => <input class='profile_input' id='avatar' name='avatar' type='file' />
      #
      #   file_field_tag 'picture', disabled: true
      #   # => <input disabled='disabled' id='picture' name='picture' type='file' />
      #
      #   file_field_tag 'resume', value: '~/resume.doc'
      #   # => <input id='resume' name='resume' type='file' value='~/resume.doc' />
      #
      #   file_field_tag 'user_pic', accept: 'image/png,image/gif,image/jpeg'
      #   # => <input accept='image/png,image/gif,image/jpeg' id='user_pic' name='user_pic' type='file' />
      #
      #   file_field_tag 'file', accept: 'text/html', class: 'upload', value: 'index.html'
      #   # => <input accept='text/html' class='upload' id='file' name='file' type='file' value='index.html' />
      def file_field_tag(name, options = {})
        text_field_tag(name, nil, convert_direct_upload_option_to_url(options.merge(type: :file)))
      end
    
    module ActionView #:nodoc:
  # = Action View Raw Output Helper
  module Helpers #:nodoc:
    module OutputSafetyHelper
      # This method outputs without escaping a string. Since escaping tags is
      # now default, this can be used when you don't want Rails to automatically
      # escape tags. This is not recommended if the data is coming from the user's
      # input.
      #
      # For example:
      #
      #  raw @user.name
      #  # => 'Jimmy <alert>Tables</alert>'
      def raw(stringish)
        stringish.to_s.html_safe
      end
    
              def hidden_field_for_checkbox(options)
            @unchecked_value ? tag('input', options.slice('name', 'disabled', 'form').merge!('type' => 'hidden', 'value' => @unchecked_value)) : ''.html_safe
          end
      end
    end
  end
end

    
            def render(&block)
          render_collection_for(RadioButtonBuilder, &block)
        end
    
        def render_collection(event)
      identifier = event.payload[:identifier] || 'templates'
    
          # Support legacy foo.erb names even though we now ignore .erb
      # as well as incorrectly putting part of the path in the template
      # name instead of the prefix.
      def normalize_name(name, prefixes)
        prefixes = prefixes.presence
        parts    = name.to_s.split('/'.freeze)
        parts.shift if parts.first.empty?
        name = parts.pop
    
          maker.channel.links.new_link do |link|
        link.rel = 'self'
        link.href = 'https://devdocs.io/feed.atom'
        link.type = 'application/atom+xml'
      end
    
        if version.present?
      doc = doc.versions.find { |klass| klass.version == version || klass.version_slug == version }
      raise DocNotFound.new(%(could not find version '#{version}' for doc '#{name}'), name) unless doc
    elsif version != false
      doc = doc.versions.first
    end
    
            return a.casecmp(b) if a_length == 1 && b_length == 1
        return 1 if a_length == 1
        return -1 if b_length == 1
    
        def name=(value)
      @name = value.try :strip
    end
    
        def initialize(options = {})
      @request_options = options.extract!(:request_options)[:request_options].try(:dup) || {}
      options[:max_concurrency] ||= 20
      options[:pipelining] = false
      super
    end
    
    module Docs
  class Subscriber < ActiveSupport::Subscriber
    cattr_accessor :namespace
    
    if $0 == __FILE__
  begin
    LogStash::PluginManager::Main.run('bin/logstash-plugin', ARGV)
  rescue LogStash::PluginManager::Error => e
    $stderr.puts(e.message)
    exit(1)
  end
end

    
      def validate_cache_location
    cache_location = LogStash::Environment::CACHE_PATH
    if File.exist?(cache_location)
      puts('Directory #{cache_location} is going to be overwritten, do you want to continue? (Y/N)')
      override = ( 'y' == STDIN.gets.strip.downcase ? true : false)
      if override
        FileUtils.rm_rf(cache_location)
      else
        puts('Unpack cancelled: file #{cache_location} already exists, please delete or move it')
        exit
      end
    end
  end
end

    
    project_versions_yaml_path = File.expand_path('../versions.yml', File.dirname(__FILE__))
if File.exist?(project_versions_yaml_path)
  # we need to copy the project level versions.yml into the gem root
  # to be able to package it into the gems file structure
  # as the require 'logstash-core-plugin-api/version' loads the yaml file from within the gem root.
  #
  # we ignore the copy in git and we overwrite an existing file
  # each time we build the logstash-core gem
  original_lines = IO.readlines(project_versions_yaml_path)
  original_lines << ''
  original_lines << '# This is a copy the project level versions.yml into this gem's root and it is created when the gemspec is evaluated.'
  gem_versions_yaml_path = File.expand_path('./versions-gem-copy.yml', File.dirname(__FILE__))
  File.open(gem_versions_yaml_path, 'w') do |new_file|
    # create or overwrite
    new_file.puts(original_lines)
  end
end
    
      it 'returns the config_hash' do
    expect(subject.config_hash).not_to be_nil
  end
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install #{gem_path_on_vagrant}')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-dns')
          end
        end
    
      def framework_major_version
    framework_version.split('.').first.to_i
  end
end
World(RailsCommandHelpers)

    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
  end
    
        def make
      geometry = GeometryParser.new(geometry_string.strip).make
      geometry || raise(Errors::NotIdentifiedByImageMagickError.new)
    end
    
            if args.length > 0
          attachment.to_s(args.first)
        else
          attachment
        end
      end
    end