
        
              should 'be processed and written to destination when passed as '\
        'an entry in 'site.pages' array' do
        @page.content = '{{ site.title }}'
        @page.data['permalink'] = '/virtual-about/'
    
        # Check if excerpt includes a string
    #
    # Returns true if the string passed in
    def include?(something)
      (output && output.include?(something)) || content.include?(something)
    end
    
          def load_all_devices
        self.devices = []
    
          def task_available?(task)
        load_all_tasks
        return tasks.collect(&:title).include?(task)
      end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=/tmp/cloc.xml')
      end
    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::VERSION_NUMBER]).to match(/cd .* && agvtool new-marketing-version 1.77.3/)
      end
    
        validate :validate_evernote_options
    
        if params[:sort].present?
      attribute, direction = params[:sort].downcase.split('.')
      unless valid_sorts.include?(attribute)
        attribute, direction = default.to_a.first
      end
    else
      attribute, direction = default.to_a.first
    end
    
        respond_to do |format|
      format.html
      format.json {
        send_data Utils.pretty_jsonify(@user_credentials.limit(nil).as_json), disposition: 'attachment'
      }
    end
  end
    
        def as_json
      { entries: entries_as_json, types: types_as_json }
    end
    
        def initialize(store, docs)
      @store = store
      @docs = docs
    end
    
        private
    
          base_dir = Pathname.new(normalized_path)
      base_dir = base_dir.parent unless path.end_with? '/'
    
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
    
      def test_pipeline_rw
    Open3.pipeline_rw([RUBY, '-e', 'print STDIN.read + '1''],
                      [RUBY, '-e', 'print STDIN.read + '2'']) {|i,o,ts|
      assert_kind_of(IO, i)
      assert_kind_of(IO, o)
      assert_kind_of(Array, ts)
      assert_equal(2, ts.length)
      ts.each {|t| assert_kind_of(Thread, t) }
      i.print '0'
      i.close
      assert_equal('012', o.read)
      ts.each {|t|
        assert(t.value.success?)
      }
    }
  end
    
            private
        def update_content
          components = [@hour, @minute, @second]
          @content =
            ::RSS::ITunesItemModel::ITunesDuration.construct(*components)
        end
      end
    end
    
    #
# Project
#
    
    signer._invoke('JarSignerMSF','[Ljava.lang.String;',jarsignerOpts)
    
        _cal[ver].each_pair do |key, value|
      cal[ver][key] = Array.new
      cal[ver][key] << String.new
      cal[ver][key][-1] << '#ifdef AIX%s' % ver.delete('.')
      cal[ver][key][-1] << '\n'
      cal[ver][key][-1] << '''.rjust(5)
      value.each_byte do |c|
        cal[ver][key][-1] << '\x%02x' % c
      end
      cal[ver][key][-1] << '''.ljust(7)
      cal[ver][key][-1] << '/*  cal     r2,-%d(r29)' %
          (65536 - value.unpack('nn')[1])
      cal[ver][key][-1] << '*/'.rjust(15)
      cal[ver][key][-1] << '\n'
      cal[ver][key][-1] << '#endif'
      cal[ver][key][-1] << '\n'
    end
    
    	def parse_file(file)
		while (line = file.gets)
			parse_line(line)
		end
    
        def type_from_mime_magic
      @type_from_mime_magic ||= File.open(@filepath) do |file|
        MimeMagic.by_magic(file).try(:type)
      end
    end
    
            def description
          'require presence of attachment #{@attachment_name}'
        end