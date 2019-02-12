
        
        # The module that contains everything Sass-related:
#
# * {Sass::Engine} is the class used to render Sass/SCSS within Ruby code.
# * {Sass::Plugin} is interfaces with web frameworks (Rails and Merb in particular).
# * {Sass::SyntaxError} is raised when Sass encounters an error.
# * {Sass::CSS} handles conversion of CSS to Sass.
#
# Also see the {file:SASS_REFERENCE.md full Sass reference}.
module Sass
  class << self
    # @private
    attr_accessor :tests_running
  end
    
          options[:cache_store] ||= Sass::CacheStores::Chain.new(
        Sass::CacheStores::Memory.new, Sass::CacheStores::Filesystem.new(options[:cache_location]))
      # Support both, because the docs said one and the other actually worked
      # for quite a long time.
      options[:line_comments] ||= options[:line_numbers]
    
    module Sass
  # The abstract base class for lexical environments for SassScript.
  class BaseEnvironment
    class << self
      # Note: when updating this,
      # update sass/yard/inherited_hash.rb as well.
      def inherited_hash_accessor(name)
        inherited_hash_reader(name)
        inherited_hash_writer(name)
      end
    
      def pod_prefix
    File.expand_path('../..', pod_bin)
  end
    
          def stack
        UI::ErrorReport.stack
      end
    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
      def validate_target_file
    if File.exist?(target_file)
      if  delete_target_file?
        File.delete(target_file)
      else
        signal_error('Package creation cancelled, a previously generated package exist at location: #{target_file}, move this file to safe place and run the command again')
      end
    end
  end
    
          # Try to add the gems to the current gemfile and lock file, if successful
      # both of them will be updated. This injector is similar to Bundler's own injector class
      # minus the support for additionals source and doing local resolution only.
      ::Bundler::LogstashInjector.inject!(pack)
    
    # Silence locale validation warning
require 'i18n'
I18n.enforce_available_locales = false
    
        get page
    # good html:
    # <pre><code>one\ntwo\nthree\nfour\n</code></pre>\n
    # broken html:
    # <pre>\n  <code>one\ntwo\nthree\nfour\n</code>\n</pre>
    assert_match /<pre><code>one\ntwo\nthree\nfour\n<\/code><\/pre>\n/m, last_response.body
  end
    
    
    
      class DuplicatePageError < Error
    attr_accessor :dir
    attr_accessor :existing_path
    attr_accessor :attempted_path
    
    # Multi-line step scoper
When /^(.*) within (.*[^:]):$/ do |step, parent, table_or_string|
  with_scope(parent) { When '#{step}:', table_or_string }
end
    
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

    
        def calculated_type_matches
      possible_types.select do |content_type|
        content_type == type_from_file_contents
      end
    end
    
        def cropping dst, ratio, scale
      if ratio.horizontal? || ratio.square?
        '%dx%d+%d+%d' % [ dst.width, dst.height, 0, (self.height * scale - dst.height) / 2 ]
      else
        '%dx%d+%d+%d' % [ dst.width, dst.height, (self.width * scale - dst.width) / 2, 0 ]
      end
    end