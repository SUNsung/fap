
        
            def variant
      ActiveStorage::Variant.new(image, variation).processed
    end
    
          protected
        attr_reader :alias_tracker, :base_klass, :join_root
    
        test 'head :processing (102) does not return a content-type header' do
      headers = HeadController.action(:processing).call(Rack::MockRequest.env_for('/')).second
      assert_nil headers['Content-Type']
      assert_nil headers['Content-Length']
    end
    
            assert_equal 'summary, title', @controller.response.body
        assert @controller.params.has_key?(:summary)
        assert @controller.params.has_key?(:title)
        assert_equal 'content...', @controller.params['summary']
        assert_equal 'JSON', @controller.params['title']
      end
    end
  end
    
        def perform(mailer, mail_method, delivery_method, *args) #:nodoc:
      mailer.constantize.public_send(mail_method, *args).send(delivery_method)
    end
    
        # Validates that {#boundary} is {#valid_ip_or_range? a valid IP address or
    # IP address range}. Due to this not being tested before it was moved here
    # from Mdm, the default workspace does not validate. We always validate boundaries
    # and a workspace may have a blank default boundary.
    #
    # @return [void]
    def boundary_must_be_ip_range
      unless boundary.blank?
        begin
          boundaries = Shellwords.split(boundary)
        rescue ArgumentError
          boundaries = []
        end
    
    lib_path = root.join('lib').to_path
    
    require 'rubygems'  # install rubygems
require 'hpricot'   # gem install hpricot
require 'uri'
require 'timeout'
    
          when :banner
        # Because some ftp server send multiple banner we take only the first one and ignore the rest
        if not (s[:info])
          s[:info] = matches
          report_service(s)
        end
    
      def parse(pkt)
    # We want to return immediantly if	we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 80 and pkt.tcp_dport != 80)
    s = find_session((pkt.tcp_sport == 80) ? get_session_src(pkt) : get_session_dst(pkt))
    
    
# replace calls, jmps, and read/write handle/filename references
replaces = []
asm.each_line { |ln|
	if ln =~ /call /
		parts = ln.split(' ')
		if (parts[0] == 'call' and parts[2] == ';call')
			old = parts[1]
			func = parts[3]
			new = addrs[func]
			#puts '%32s: %s -> %x' % [func, old, new]
			replaces << [func, old, new.to_s(16)]
		end
	end
    }
    
    puts '* Closing socket'
    
          opts.on('-T', '--to FORMAT',
        'The format to convert to. Can be scss or sass.',
        'By default, this is inferred from the output filename.',
        'If there is none, defaults to sass.') do |name|
        @options[:to] = name.downcase.to_sym
        unless [:scss, :sass].include?(@options[:to])
          raise 'Unknown format for sass-convert --to: #{name}'
        end
      end
    
            def define_logger(name, options = {})
          class_eval <<-RUBY, __FILE__, __LINE__ + 1
            def #{name}(message)
              #{options.fetch(:to, :log)}(#{name.inspect}, message)
            end
          RUBY
        end
      end
    end
  end
end

    
      Sass::Plugin.options.merge!(config)
    
        def parse_input(environment, text)
      case text
      when Script::MATCH
        name = $1
        guarded = !!$3
        val = Script::Parser.parse($2, @line, text.size - ($3 || '').size - $2.size)
    
    # usage rake isolate[my-post]
desc 'Move all other posts than the one currently being worked on to a temporary stash location (stash) so regenerating the site happens much more quickly.'
task :isolate, :filename do |t, args|
  stash_dir = '#{source_dir}/#{stash_dir}'
  FileUtils.mkdir(stash_dir) unless File.exist?(stash_dir)
  Dir.glob('#{source_dir}/#{posts_dir}/*.*') do |post|
    FileUtils.mv post, stash_dir unless post.include?(args.filename)
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
    
    module Jekyll
    
      def default_metadata
    @factory.build(:default_metadata).all
  end
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end
    
    # This is the base class for logstash codecs.
module LogStash::Codecs; class Base < LogStash::Plugin
  include LogStash::Config::Mixin