
        
              keys = Spaceship::Portal::Key.all
      expect(keys.size).to eq(2)
      expect(keys.sample).to be_instance_of(Spaceship::Portal::Key)
    end
  end
    
        context 'minimal configuration' do
      let(:options) do
        {
          name: { 'en-US' => 'Fastlane Demo' },
          description: { 'en-US' => 'Demo description' }
        }
      end
    
          def device_avalaible?(serial)
        load_all_devices
        return devices.map(&:serial).include?(serial)
      end
    
          it 'does set the exclude directories' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(exclude_dir: 'test1,test2,build')
          end').runner.execute(:test)
    
          it 'properly removes new lines of the build number' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: '24\n', xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
    unless dups.empty?
  puts '\nDuplicate links:'
  dups.each do |link|
    puts '- #{link}'
    puts `grep -nr '#{link}' README.md`
  end
  puts '\nDone with errors.'
  exit(1)
end
    
              # Return the registry
          data[:provisioners]
        end
    
    module Vagrant
  module Plugin
    module V2
      # This is the base class for a provider for the V2 API. A provider
      # is responsible for creating compute resources to match the needs
      # of a Vagrant-configured system.
      class Provider
        include CapabilityHost
    
            @template_root = data.delete(:template_root)
        @template_root ||= Vagrant.source_root.join('templates')
        @template_root = Pathname.new(@template_root)
    
    require 'test/unit'
require 'mkmf'
require 'tmpdir'
    
      #
  # Returns a string which represents the time as a dateTime defined by XML
  # Schema:
  #
  #   CCYY-MM-DDThh:mm:ssTZD
  #   CCYY-MM-DDThh:mm:ss.sssTZD
  #
  # where TZD is Z or [+-]hh:mm.
  #
  # If self is a UTC time, Z is used as TZD.  [+-]hh:mm is used otherwise.
  #
  # +fractional_digits+ specifies a number of digits to use for fractional
  # seconds.  Its default value is 0.
  #
  # You must require 'time' to use this method.
  #
  def xmlschema(fraction_digits=0)
    fraction_digits = fraction_digits.to_i
    s = strftime('%FT%T')
    if fraction_digits > 0
      s << strftime('.%#{fraction_digits}N')
    end
    s << (utc? ? 'Z' : strftime('%:z'))
  end
  alias iso8601 xmlschema
end
    
      def test_exit_status
    Open3.popen3(RUBY, '-e', 'exit true') {|i,o,e,t|
      assert_equal(true, t.value.success?)
    }
    Open3.popen3(RUBY, '-e', 'exit false') {|i,o,e,t|
      assert_equal(false, t.value.success?)
    }
  end
    
            opts.on '--no-retry', 'Disable --retry' do
          options[:retry] = false
        end
    
        #
    # Replace %\w+% into the environment value of what is contained between the %'s
    # This method is used for REG_EXPAND_SZ.
    #
    # For detail, see expandEnvironmentStrings[http://msdn.microsoft.com/library/en-us/sysinfo/base/expandenvironmentstrings.asp] \Win32 \API.
    #
    def self.expand_environ(str)
      str.gsub(Regexp.compile('%([^%]+)%'.encode(str.encoding))) {
        v = $1.encode(LOCALE)
        (e = ENV[v] || ENV[v.upcase]; e.encode(str.encoding) if e) ||
        $&
      }
    end
    
    
    {    r1, w1 = IO.pipe
    r2, w2 = IO.pipe
    t1 = Thread.new { w1 << megacontent; w1.close }
    t2 = Thread.new { r2.read; r2.close }
    IO.copy_stream(r1, w2) rescue nil
    w2.close
    r1.close
    t1.join
    t2.join
  }, 'megacontent-copy_stream', ['INT'], :timeout => 10 or break
end
    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
      # Disable automatic flushing of the log to improve performance.
  # config.autoflush_log = false
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
        def cache(gist, file, data)
      cache_file = get_cache_file_for gist, file
      File.open(cache_file, 'w') do |io|
        io.write data
      end
    end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
          def get_shallow(*path)
        snapshot.metric_store.get_shallow(*path)
      end
    
        def _1
      elements[1]
    end