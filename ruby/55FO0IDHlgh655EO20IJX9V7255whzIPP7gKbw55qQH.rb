
        
            assert_equal 'foo', output_buffer, 'javascript_tag without a block should not concat to output_buffer'
  end
    
          # Need to experiment if this priority is the best one: rendered => output_buffer
      class RenderedViewsCollection
        def initialize
          @rendered_views ||= Hash.new { |hash, key| hash[key] = [] }
        end
    
            def method_missing(name, *args, &block)
          # Caches the method definition as a singleton method of the receiver.
          #
          # By letting #delegate handle it, we avoid an enclosure that'll capture args.
          singleton_class.delegate name, to: :instance
    
        test 'connect a request to controller instance without dispatch' do
      env = {}
      controller = BareController.new
      controller.set_request! ActionDispatch::Request.new(env)
      assert controller.request
    end
  end
    
          private
        def processed_mailer
          @processed_mailer ||= @mailer_class.new.tap do |mailer|
            mailer.params = @params
            mailer.process @action, *@args
          end
        end
    
            def application_mailer_file_name
          @_application_mailer_file_name ||= if mountable_engine?
            'app/mailers/#{namespaced_path}/application_mailer.rb'
          else
            'app/mailers/application_mailer.rb'
          end
        end
    end
  end
end

    
    unless File.exist?(PROF_OUTPUT_FILE)
  StackProf.run(
    mode: MODE.to_sym,
    interval: 100,
    raw: true,
    out: PROF_OUTPUT_FILE
  ) do
    puts 'GC Stats:', JSON.pretty_generate(GC.stat)
    GC.disable
    
    # Create an array of vendored mimetype => [extensions]
mimes = {}
json = open('https://raw.githubusercontent.com/jshttp/mime-db/master/db.json').read
data = JSON.parse(json)
data.reject! { |mime, meta| meta['extensions'].nil? || meta['extensions'].empty? }
data.each do |mime, meta|
  # Normalize extensions and mime-types
  mime = mime.downcase.strip
  extensions = meta['extensions'].map { |e| e.downcase.strip }.compact
    
    def all_steps_to_path(path)
  source = source_dir
  dest = Pathname.new(path).expand_path
  paths = []
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
        def base_directory
      @base_directory.to_s
    end
    
      # Make it so that network access from the vagrant guest is able to
  # use SSH private keys that are present on the host without copying
  # them into the VM.
  config.ssh.forward_agent = true
    
      validate :enough_poll_answers
  validates :question, presence: true
    
          rescue_from Rack::OAuth2::Server::Authorize::BadRequest,
                  JSON::JWT::InvalidFormat, JSON::JWK::UnknownAlgorithm do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_request, error_description: e.message, status: 400}
      end
      rescue_from JSON::JWT::VerificationFailed do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_grant, error_description: e.message, status: 400}
      end
    end
  end
end

    
      it 'comparison of Accept-Language header is not case sensitive' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_ACCEPT_LANGUAGE' => 'A'
    expect(session).not_to be_empty
  end
    
            private
    
            def literal_at_end?(regex_str)
          # is this regexp 'literal' in the sense of only matching literal
          # chars, rather than using metachars like . and * and so on?
          # also, is it anchored at the end of the string?
          regex_str =~ /\A(?:#{LITERAL_REGEX})+\\z\z/
        end
    
    module RuboCop
  module Cop
    module Performance
      # This cop identifies unnecessary use of a regex where
      # `String#start_with?` would suffice.
      #
      # @example
      #   # bad
      #   'abc' =~ /\Aab/
      #   'abc'.match(/\Aab/)
      #
      #   # good
      #   'abc'.start_with?('ab')
      class StartWith < Cop
        MSG = 'Use `String#start_with?` instead of a regex match anchored to ' \
              'the beginning of the string.'.freeze
        SINGLE_QUOTE = '''.freeze
    
            def parent_block_node(node)
          node.each_ancestor(:block).first
        end
      end
    end
  end
end

    
            def variable_name(node)
          node.children[0]
        end
    
              optarg_positions.each do |optarg_position|
            # there can only be one group of optional arguments
            break if optarg_position > arg_positions.max
    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
          def started?
        true
      end
    
      module CompareExpression0
    def rvalue1
      elements[0]
    end
    
          expect('.border-color-false-third').to have_ruleset(ruleset)
      expect('.border-color-false-third').to_not have_rule(bad_rule)
    end
  end
end

    
    describe 'buttons' do
  before(:all) do
    ParserSupport.parse_file('library/buttons')
    
          expect('.margin-false-third').to have_ruleset(ruleset)
      expect('.margin-false-third').to_not have_rule(bad_rule)
    end
  end
end

    
      context 'called with arguments (1, $ratio: $golden-ratio)' do
    it 'output the first value from the golden ratio scale' do
      expect('.one-golden-ratio').to have_rule('font-size: 1.618em')
    end
  end