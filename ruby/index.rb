
        
                def tag_options(options, escape = true)
          return if options.blank?
          output = ''.dup
          sep    = ' '
          options.each_pair do |key, value|
            if TAG_PREFIXES.include?(key) && value.is_a?(Hash)
              value.each_pair do |k, v|
                next if v.nil?
                output << sep
                output << prefix_tag_option(key, k, v, escape)
              end
            elsif BOOLEAN_ATTRIBUTES.include?(key)
              if value
                output << sep
                output << boolean_tag_option(key)
              end
            elsif !value.nil?
              output << sep
              output << tag_option(key, value, escape)
            end
          end
          output unless output.empty?
        end
    
    module ActionCable
  module SubscriptionAdapter
    class Redis < Base # :nodoc:
      prepend ChannelPrefix
    
        def encode_credentials(token, options = {})
      ActionController::HttpAuthentication::Token.encode_credentials(token, options)
    end
end

    
    class WebServiceTest < ActionDispatch::IntegrationTest
  class TestController < ActionController::Base
    def assign_parameters
      if params[:full]
        render plain: dump_params_keys
      else
        render plain: (params.keys - ['controller', 'action']).sort.join(', ')
      end
    end
    
    require 'active_support/log_subscriber'
    
        # Access the message instance.
    def message
      @_message
    end
    
    puts '\nDone.'

    
      def test_enable
    @opt.parse!(%w'--enable-foo')
    assert_equal(true, @foo)
    @opt.parse!(%w'--enable-bar')
    assert_equal(true, @bar)
  end
    
      # Open3.pipeline_rw starts a list of commands as a pipeline with pipes
  # which connect to stdin of the first command and stdout of the last command.
  #
  #   Open3.pipeline_rw(cmd1, cmd2, ... [, opts]) {|first_stdin, last_stdout, wait_threads|
  #     ...
  #   }
  #
  #   first_stdin, last_stdout, wait_threads = Open3.pipeline_rw(cmd1, cmd2, ... [, opts])
  #   ...
  #   first_stdin.close
  #   last_stdout.close
  #
  # Each cmd is a string or an array.
  # If it is an array, the elements are passed to Process.spawn.
  #
  #   cmd:
  #     commandline                              command line string which is passed to a shell
  #     [env, commandline, opts]                 command line string which is passed to a shell
  #     [env, cmdname, arg1, ..., opts]          command name and one or more arguments (no shell)
  #     [env, [cmdname, argv0], arg1, ..., opts] command name and arguments including argv[0] (no shell)
  #
  #   Note that env and opts are optional, as for Process.spawn.
  #
  # The options to pass to Process.spawn are constructed by merging
  # +opts+, the last hash element of the array, and
  # specifications for the pipes between each of the commands.
  #
  # Example:
  #
  #   Open3.pipeline_rw('tr -dc A-Za-z', 'wc -c') {|i, o, ts|
  #     i.puts 'All persons more than a mile high to leave the court.'
  #     i.close
  #     p o.gets #=> '42\n'
  #   }
  #
  #   Open3.pipeline_rw('sort', 'cat -n') {|stdin, stdout, wait_thrs|
  #     stdin.puts 'foo'
  #     stdin.puts 'bar'
  #     stdin.puts 'baz'
  #     stdin.close     # send EOF to sort.
  #     p stdout.read   #=> '     1\tbar\n     2\tbaz\n     3\tfoo\n'
  #   }
  def pipeline_rw(*cmds, **opts, &block)
    in_r, in_w = IO.pipe
    opts[:in] = in_r
    in_w.sync = true
    
      def test_capture3_stdin_data
    o, e, s = Open3.capture3(RUBY, '-e', '', :stdin_data=>'z'*(1024*1024))
    assert_equal('', o)
    assert_equal('', e)
    assert(s.success?)
  end
    
        # Parses a C prototype signature
    #
    # If Hash +tymap+ is provided, the return value and the arguments from the
    # +signature+ are expected to be keys, and the value will be the C type to
    # be looked up.
    #
    # Example:
    #   require 'fiddle/import'
    #
    #   include Fiddle::CParser
    #     #=> Object
    #
    #   parse_signature('double sum(double, double)')
    #     #=> ['sum', Fiddle::TYPE_DOUBLE, [Fiddle::TYPE_DOUBLE, Fiddle::TYPE_DOUBLE]]
    #
    #   parse_signature('void update(void (*cb)(int code))')
    #     #=> ['update', Fiddle::TYPE_VOID, [Fiddle::TYPE_VOIDP]]
    #
    #   parse_signature('char (*getbuffer(void))[80]')
    #     #=> ['getbuffer', Fiddle::TYPE_VOIDP, []]
    #
    def parse_signature(signature, tymap=nil)
      tymap ||= {}
      case compact(signature)
      when /^(?:[\w\*\s]+)\(\*(\w+)\((.*?)\)\)(?:\[\w*\]|\(.*?\));?$/
        func, args = $1, $2
        return [func, TYPE_VOIDP, split_arguments(args).collect {|arg| parse_ctype(arg, tymap)}]
      when /^([\w\*\s]+[\*\s])(\w+)\((.*?)\);?$/
        ret, func, args = $1.strip, $2, $3
        return [func, parse_ctype(ret, tymap), split_arguments(args).collect {|arg| parse_ctype(arg, tymap)}]
      else
        raise(RuntimeError,'can't parse the function prototype: #{signature}')
      end
    end
    
              components.unshift('00') until components.size == 3
    
          class ITunesImage < ITunesImageBase; end
      class ITunesOwner < ITunesOwnerBase; end
    end
    
    require_relative '../mastodon/snowflake'
    
        respond_to do |format|
      format.html do
        serializable_resource = ActiveModelSerializers::SerializableResource.new(InitialStatePresenter.new(initial_state_params), serializer: InitialStateSerializer)
        @initial_state_json   = serializable_resource.to_json
      end
    
      def collection_presenter
    page = ActivityPub::CollectionPresenter.new(
      id: account_following_index_url(@account, page: params.fetch(:page, 1)),
      type: :ordered,
      size: @account.following_count,
      items: @follows.map { |f| ActivityPub::TagManager.instance.uri_for(f.target_account) },
      part_of: account_following_index_url(@account),
      next: page_url(@follows.next_page),
      prev: page_url(@follows.prev_page)
    )
    if params[:page].present?
      page
    else
      ActivityPub::CollectionPresenter.new(
        id: account_following_index_url(@account),
        type: :ordered,
        size: @account.following_count,
        first: page
      )
    end
  end
end

    
          expect(response).to redirect_to(settings_preferences_path)
      user.reload
      expect(user.settings['boost_modal']).to be true
      expect(user.settings['delete_modal']).to be false
    end
  end
end
