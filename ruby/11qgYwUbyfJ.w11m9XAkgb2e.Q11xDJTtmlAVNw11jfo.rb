
        
              def gradle_path=(gradle_path)
        @gradle_path = gradle_path
        @escaped_gradle_path = gradle_path.shellescape
      end
    
          it 'get GIT build number' do
        result = Fastlane::FastFile.new.parse('lane :test do
            get_build_number_repository
        end').runner.execute(:test)
    
        it 'mimics a sed conditional by comparing an exclusive-end range with $.' do
      ruby_exe(nil, args: (@script % '2...3')).should == '2\n3\n'
      ruby_exe(nil, args: (@script % '2...2')).should == '2\n3\n4\n5\n'
    end
  end
end

    
      def test_keyword_invalid_name
    bug11663 = '[ruby-core:71356] [Bug #11663]'
    
      describe 'RTYPEDATA' do
    it 'returns the struct data' do
      a = @s.typed_wrap_struct(1024)
      @s.typed_get_struct_rdata(a).should == 1024
    end
    
    begin
  require 'openssl'
rescue LoadError => e
  raise unless (e.respond_to?(:path) && e.path == 'openssl') ||
               e.message =~ / -- openssl$/
end
    
        File.open gemspec_file, 'w' do |gs|
      gs.write @gem.to_ruby
    end
    
      def test_post_install_message_no
    @cmd.handle_options %w[--no-post-install-message]
    
        assert_equal @a1.cache_file, inst.download(@a1, local_path)
  end
    
      def test_configure_connection_for_https_ssl_ca_cert
    ssl_ca_cert, Gem.configuration.ssl_ca_cert =
      Gem.configuration.ssl_ca_cert, CA_CERT_FILE
    
      def test_condvar_nolock
    mutex = Mutex.new
    condvar = ConditionVariable.new
    
          replace_rules file do |rule|
        replace_properties rule do |props|
          props.gsub /(?<!\w)([\w-]+):(.*?);/ do |m|
            prop, vals = $1, split_prop_val.call($2)
            next m unless vals.length >= 2 && vals.any? { |v| v =~ /^[\+\-]\$/ }
            transformed = vals.map { |v| v.strip =~ %r(^\(.*\)$) ? v : '(#{v})' }
            log_transform 'property #{prop}: #{transformed * ' '}', from: 'wrap_calculation'
            '#{prop}: #{transformed * ' '};'
          end
        end
      end
    end
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
        # Returns the Sass/SCSS code for the media query list.
    #
    # @param options [{Symbol => Object}] An options hash (see {Sass::CSS#initialize}).
    # @return [String]
    def to_src(options)
      queries.map {|q| q.to_src(options)}.join(', ')
    end
    
        def self.run
      # Apparently there's no better way than this to add Sass
      # to Merb's Rack stack.
      Merb::Config[:app] = Sass::Plugin::Rack.new(Merb::Config[:app])
    end
  end
end

    
      private
    # Use callbacks to share common setup or constraints between actions.
    def set_book
      @book = Book.find(params[:id])
    end
    
    module RuboCop
  module Cop
    module Layout
      # Checks for unnecessary additional spaces inside array percent literals
      # (i.e. %i/%w).
      #
      # @example
      #
      #   # bad
      #   %w(foo  bar  baz)
      #   # good
      #   %i(foo bar baz)
      class SpaceInsideArrayPercentLiteral < Cop
        include MatchRange
        include PercentLiteral
    
            def on_send(node)
          return unless match_call?(node) &&
                        (!node.value_used? || only_truthiness_matters?(node)) &&
                        !(node.parent && node.parent.block_type?)
    
    module RuboCop
  module Cop
    module Lint
      # This cop checks that there are no repeated conditions
      # used in case 'when' expressions.
      #
      # @example
      #
      #   # bad
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'first'
      #     do_something_else
      #   end
      #
      # @example
      #
      #   # good
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'second'
      #     do_something_else
      #   end
      class DuplicateCaseCondition < Cop
        MSG = 'Duplicate `when` condition detected.'.freeze
    
              arguments.each_with_index do |argument, index|
            optarg_positions << index if argument.optarg_type?
            arg_positions << index if argument.arg_type?
          end
    
          # An array containing the arguments of the method definition.
      #
      # @return [Array<Node>] the arguments of the method definition
      def arguments
        node_parts[1]
      end
    
            def higher_than_high?
          @high.nil? || @high == Float::INFINITY || !passes_validation_with_size(@high + 1)
        end
      end
    end
  end
end

    
      # Get list of styles saved on previous deploy (running rake paperclip:refresh:missing_styles)
  def self.get_registered_attachments_styles
    YAML.load_file(Paperclip.registered_attachments_styles_path)
  rescue Errno::ENOENT
    nil
  end
  private_class_method :get_registered_attachments_styles
    
          def forbidden
        [options[:not]].flatten.compact
      end