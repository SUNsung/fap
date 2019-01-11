
        
          url = File.dirname(url)
  url == FORWARD_SLASH ? url : '#{url}/'
end
    
      def self.theme_gem_dir; source_dir.join('tmp', 'jekyll', 'my-cool-theme'); end
    
              relation.update_all(update)
        end
      end
    end
  end
end

    
    module Gitlab
  module Ci
    module Pipeline
      # Class for preloading data associated with pipelines such as commit
      # authors.
      class Preloader
        def self.preload!(pipelines)
          ##
          # This preloads all commits at once, because `Ci::Pipeline#commit` is
          # using a lazy batch loading, what results in only one batched Gitaly
          # call.
          #
          pipelines.each(&:commit)
    
            # attributes - A Hash containing the raw note details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
      def ==(other)
    if other.respond_to?(:to_ary)
      return true if to_ary == other.to_ary
    end
    
              format('%020e', 109.52).should == '000000001.095200e+02'
          format('%020E', 109.52).should == '000000001.095200E+02'
          format('%020f', 10.952).should == '0000000000010.952000'
          format('%020g', 12.1234).should == '000000000000012.1234'
          format('%020G', 12.1234).should == '000000000000012.1234'
          format('%020a', 196).should == '0x000000000001.88p+7'
          format('%020A', 196).should == '0X000000000001.88P+7'
        end
    
      it 'raises an ArgumentError when passed a negative duration' do
    lambda { sleep(-0.1) }.should raise_error(ArgumentError)
    lambda { sleep(-1) }.should raise_error(ArgumentError)
  end
    
      it_behaves_like :kernel_system, :system, KernelSpecs::Method.new
end
    
      context 'writable test' do
    before do
      @tmp_file = tmp('file.kernel.test')
      touch(@tmp_file)
    end
    
        def pos
      byte_to_str_pos @s.pos
    end
    
      # Send deprecation notices to registered listeners.
  config.active_support.deprecation = :notify
    
        # @comment
    def try_comment(line, last, tab_str, comment_tab_str, index)
      return unless last && last.comment?
      # Nested comment stuff must be at least one whitespace char deeper
      # than the normal indentation
      return unless line =~ /^#{tab_str}\s/
      unless line =~ /^(?:#{comment_tab_str})(.*)$/
        raise SyntaxError.new(<<MSG.strip.tr('\n', ' '), :line => index)
Inconsistent indentation:
previous line was indented by #{Sass::Shared.human_indentation comment_tab_str},
but this line was indented by #{Sass::Shared.human_indentation line[/^\s*/]}.
MSG
      end
    
      # A read-only wrapper for a lexical environment for SassScript.
  class ReadOnlyEnvironment < BaseEnvironment
    def initialize(parent = nil, options = nil)
      super
      @content_cached = nil
    end
    # The read-only environment of the caller of this environment's mixin or function.
    #
    # @see BaseEnvironment#caller
    # @return {ReadOnlyEnvironment}
    def caller
      return @caller if @caller
      env = super
      @caller ||= env.is_a?(ReadOnlyEnvironment) ? env : ReadOnlyEnvironment.new(env, env.options)
    end
    
    module Sass::Exec
  # The abstract base class for Sass executables.
  class Base
    # @param args [Array<String>] The command-line arguments
    def initialize(args)
      @args = args
      @options = {}
    end
    
          opts.on('-s', '--stdin', :NONE,
              'Read input from standard input instead of an input file.',
              'This is the default if no input file is specified. Requires --from.') do
        @options[:input] = $stdin
      end
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
            def create
          authorize! :create, Spree::OptionType
          @option_type = Spree::OptionType.new(option_type_params)
          if @option_type.save
            render :show, status: 201
          else
            invalid_resource!(@option_type)
          end
        end
    
            def purchase
          perform_payment_action(:purchase)
        end
    
              @original_shipment.transfer_to_location(@variant, @quantity, @stock_location)
          render json: { success: true, message: Spree.t(:shipment_transfer_success) }, status: 201
        end
    
            def show
          @state = scope.find(params[:id])
          respond_with(@state)
        end
    
            def show
          respond_with(stock_location)
        end
    
    class SinatraStaticServer < Sinatra::Base
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
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
    
      class PostFilters < Octopress::Hooks::Post
    def pre_render(post)
      OctopressFilters::pre_filter(post)
    end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
        def sizes
      attrs = 'width='#{@sizes[0]}'' if @sizes[0]
      attrs += ' height='#{@sizes[1]}'' if @sizes[1]
      attrs
    end
  end
end