
        
        # Test if processing content string without any Liquid constructs, via Liquid,
# is slower than checking whether constructs exist ( using `String#include?` )
# and return-ing the 'plaintext' content string as is..
#
# Ref: https://github.com/jekyll/jekyll/pull/6735
    
    module Jekyll
  module Deprecator
    extend self
    
    module Jekyll
  module Drops
    class UnifiedPayloadDrop < Drop
      mutable true
    
    package = FPM::Package::Dir.new
    
        # Provide any template values as methods on the package.
    if template_scripts?
      template_value_list.each do |key, value|
        (class << output; self; end).send(:define_method, key) { value }
      end
    end
    
      option '--channel-update', :flag,
    'call 'pear channel-update' prior to installation'
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
    # Support for self extracting sh files (.sh files)
#
# This class only supports output of packages.
#
# The sh package is a single sh file with a tar payload concatenated to the end.
# The script can unpack the tarball to install it and call optional post install scripts.
class FPM::Package::Sh < FPM::Package
    
        process.wait if process.alive?
    
          self
    end # def add_symlink
  end
end

    
    When /^I reset Bundler environment variable$/ do
  BUNDLE_ENV_VARS.each do |key|
    ENV[key] = nil
  end
end
    
    # The base module that gets included in ActiveRecord::Base. See the
# documentation for Paperclip::ClassMethods for more useful information.
module Paperclip
  extend Helpers
  extend Logger
  extend ProcessorHelpers
    
        # Extracts the Geometry from a 'WxH,O' string
    # Where W is the width, H is the height,
    # and O is the EXIF orientation
    def self.parse(string)
      GeometryParser.new(string).make
    end
    
        def initialize(klass, name, options)
      @klass = klass
      @name = name
      @options = options
    end