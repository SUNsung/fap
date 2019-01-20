
        
              def add_fragment_back_to_path(uri, path)
        [path, uri.fragment].compact.join('#')
      end
    end
  end
end

    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
            selected_modules.each do |m|
          mod = Devise::Models.const_get(m.to_s.classify)
    
        # The import/mixin stack.
    #
    # @return [Sass::Stack]
    def stack
      @stack || global_env.stack
    end
  end
    
        desc 'Run the unit specs'
    task :unit => 'fixture_tarballs:unpack' do
      sh unit_specs_command
    end
    
    Given /^I add this snippet to the User model:$/ do |snippet|
  file_name = 'app/models/user.rb'
  cd('.') do
    content = File.read(file_name)
    File.open(file_name, 'w') { |f| f << content.sub(/end\Z/, '#{snippet}\nend') }
  end
end
    
    module RailsCommandHelpers
  def framework_version?(version_string)
    framework_version =~ /^#{version_string}/
  end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
    # This stuff needs to be run after Paperclip is defined.
require 'paperclip/io_adapters/registry'
require 'paperclip/io_adapters/abstract_adapter'
require 'paperclip/io_adapters/empty_string_adapter'
require 'paperclip/io_adapters/identity_adapter'
require 'paperclip/io_adapters/file_adapter'
require 'paperclip/io_adapters/stringio_adapter'
require 'paperclip/io_adapters/data_uri_adapter'
require 'paperclip/io_adapters/nil_adapter'
require 'paperclip/io_adapters/attachment_adapter'
require 'paperclip/io_adapters/uploaded_file_adapter'
require 'paperclip/io_adapters/uri_adapter'
require 'paperclip/io_adapters/http_url_proxy_adapter'

    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          Paperclip.options[:is_windows] ? 'magick identify' : 'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Terrapin::ExitStatusError
        ''
      rescue Terrapin::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end
    
        def define_class_getter
      @klass.extend(ClassMethods)
    end
    
        # Returns the pluralized form of the attachment name. e.g.
    # 'avatars' for an attachment of :avatar
    def attachment attachment, style_name
      plural_cache.pluralize_symbol(attachment.name)
    end