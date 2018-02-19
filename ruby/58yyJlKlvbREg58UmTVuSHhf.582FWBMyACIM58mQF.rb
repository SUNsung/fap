
        
            #
    # A hash of timezones mapped to hour differences from UTC. The
    # set of time zones corresponds to the ones specified by RFC 2822
    # and ISO 8601.
    #
    ZoneOffset = { # :nodoc:
      'UTC' => 0,
      # ISO 8601
      'Z' => 0,
      # RFC 822
      'UT' => 0, 'GMT' => 0,
      'EST' => -5, 'EDT' => -4,
      'CST' => -6, 'CDT' => -5,
      'MST' => -7, 'MDT' => -6,
      'PST' => -8, 'PDT' => -7,
      # Following definition of military zones is original one.
      # See RFC 1123 and RFC 2822 for the error in RFC 822.
      'A' => +1, 'B' => +2, 'C' => +3, 'D' => +4,  'E' => +5,  'F' => +6,
      'G' => +7, 'H' => +8, 'I' => +9, 'K' => +10, 'L' => +11, 'M' => +12,
      'N' => -1, 'O' => -2, 'P' => -3, 'Q' => -4,  'R' => -5,  'S' => -6,
      'T' => -7, 'U' => -8, 'V' => -9, 'W' => -10, 'X' => -11, 'Y' => -12,
    }
    
        wait_thrs = []
    r = nil
    cmds.each_with_index {|cmd, i|
      cmd_opts = opts_base.dup
      if String === cmd
        cmd = [cmd]
      else
        cmd_opts.update cmd.pop if Hash === cmd.last
      end
      if i == 0
        if !cmd_opts.include?(:in)
          if pipeline_opts.include?(:in)
            cmd_opts[:in] = pipeline_opts[:in]
          end
        end
      else
        cmd_opts[:in] = r
      end
      if i != cmds.length - 1
        r2, w2 = IO.pipe
        cmd_opts[:out] = w2
      else
        if !cmd_opts.include?(:out)
          if pipeline_opts.include?(:out)
            cmd_opts[:out] = pipeline_opts[:out]
          end
        end
      end
      pid = spawn(*cmd, cmd_opts)
      wait_thrs << Process.detach(pid)
      r.close if r
      w2.close if w2
      r = r2
    }
    result = parent_io + [wait_thrs]
    child_io.each(&:close)
    if defined? yield
      begin
        return yield(*result)
      ensure
        parent_io.each(&:close)
        wait_thrs.each(&:join)
      end
    end
    result
  end
  module_function :pipeline_run
  class << self
    private :pipeline_run
  end
    
      def test_capture3_stdin_data_io
    IO.pipe {|r, w|
      w.write 'i'
      w.close
      o, e, s = Open3.capture3(RUBY, '-e', 'i=STDIN.read; print i+'o'; STDOUT.flush; STDERR.print i+'e'', :stdin_data=>r)
      assert_equal('io', o)
      assert_equal('ie', e)
      assert(s.success?)
    }
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
    
    --- num_values
    
      def test_1
    data = %w(deny all
              allow localhost
              allow x68k.*)
    
    assert_equal 'ok', %q{
  require 'tmpdir'
  begin
    tmpname = '#{Dir.tmpdir}/ruby-btest-#{$$}-#{rand(0x100000000).to_s(36)}'
    rw = File.open(tmpname, File::RDWR|File::CREAT|File::EXCL)
  rescue Errno::EEXIST
    retry
  end
  save = STDIN.dup
  STDIN.reopen(rw)
  STDIN.reopen(save)
  rw.close
  File.unlink(tmpname)
  :ok
}
    
    # array
assert_equal 'Array',           '[].class'
assert_equal '0',               '[].size'
assert_equal '0',               '[].length'
assert_equal '[]',              '[].inspect'
assert_equal 'Array',           '[0].class'
assert_equal '1',               '[3].size'
assert_equal '[3]',             '[3].inspect'
assert_equal '3',               'a = [3]; a[0]'
assert_equal 'Array',           '[1,2].class'
assert_equal '2',               '[1,2].size'
assert_equal '[1, 2]',          '[1,2].inspect'
assert_equal 'Array',           '[1,2,3,4,5].class'
assert_equal '5',               '[1,2,3,4,5].size'
assert_equal '[1, 2, 3, 4, 5]', '[1,2,3,4,5].inspect'
assert_equal '1',               'a = [1,2]; a[0]'
assert_equal '2',               'a = [1,2]; a[1]'
assert_equal 'Array',           'a = [1 + 2, 3 + 4, 5 + 6]; a.class'
assert_equal '[3, 7, 11]',      'a = [1 + 2, 3 + 4, 5 + 6]; a.inspect'
assert_equal '7',               'a = [1 + 2, 3 + 4, 5 + 6]; a[1]'
assert_equal '1',               '([0][0] += 1)'
assert_equal '1',               '([2][0] -= 1)'
assert_equal 'Array',           'a = [obj = Object.new]; a.class'
assert_equal '1',               'a = [obj = Object.new]; a.size'
assert_equal 'true',            'a = [obj = Object.new]; a[0] == obj'
assert_equal '5',               'a = [1,2,3]; a[1] = 5; a[1]'
assert_equal 'bar',             '[*:foo];:bar'
assert_equal '[1, 2]',          'def nil.to_a; [2]; end; [1, *nil]'
assert_equal '[1, 2]',          'def nil.to_a; [1, 2]; end; [*nil]'
assert_equal '[0, 1, {2=>3}]',  '[0, *[1], 2=>3]', '[ruby-dev:31592]'
    
        if @verbose
      @start_time = Time.now
      message @start_time
      @execs.each_with_index{|(path, label, version), i|
        message 'target #{i}: ' + (label == version ? '#{label}' : '#{label} (#{version})') + ' at \'#{path}\''
      }
      message 'measure target: #{@measure_target}'
    end
  end
    
                unless have_required_values?
              raise NotSetError.new('maker.channel.itunes_owner',
                                    _not_set_required_variables)
            end
            current.itunes_owner ||= current.class::ITunesOwner.new
            current.itunes_owner.itunes_name = @itunes_name
            current.itunes_owner.itunes_email = @itunes_email
          end
        end
    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
      #forward some requests to status message, because a poll is just attached to a status message and is not sharable itself
  delegate :author_id, :diaspora_handle, :public?, :subscribers, to: :status_message
    
              render 'admins/pods'
        end
        format.mobile { render 'admins/pods' }
        format.json { render json: pods_json }
      end
    end
    
          def redirect_prompt_error_display(error, error_description)
        redirect_params_hash = {error: error, error_description: error_description, state: params[:state]}
        redirect_fragment = redirect_params_hash.compact.map {|key, value| key.to_s + '=' + value }.join('&')
        redirect_to params[:redirect_uri] + '?' + redirect_fragment
      end
    
          def validation_fail_redirect_uri(e)
        render json: {error: :invalid_redirect_uri, error_description: e.message}, status: 400
      end
    end
  end
end

    
        # Extracts the Geometry from a file (or path to a file)
    def self.from_file(file)
      GeometryDetector.new(file).make
    end
    
            def description
          'require presence of attachment #{@attachment_name}'
        end
    
            def failure_message_when_negated
          'Attachment #{@attachment_name} cannot be between #{@low} and #{@high} bytes'
        end
        alias negative_failure_message failure_message_when_negated