
        
            # Assign additional cores to the guest OS.
    v.customize ['modifyvm', :id, '--cpus', cpu_count]
    v.customize ['modifyvm', :id, '--ioapic', 'on']
    
          topic.feature_topic_users(args)
    end
    
        self.base_url = 'http://localhost/'
    
          if options && options[:ignore_case]
        base = base.downcase
        dest = dest.downcase
      end
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
      class DummyOutput < String
    alias write concat
  end
  def assert_no_error(*args)
    $stderr, stderr = DummyOutput.new, $stderr
    assert_nothing_raised(*args) {return yield}
  ensure
    stderr, $stderr = $stderr, stderr
    $!.backtrace.delete_if {|e| /\A#{Regexp.quote(__FILE__)}:#{__LINE__-2}/o =~ e} if $!
    assert_empty(stderr)
  end
  alias no_error assert_no_error
    
        def make_time(date, year, mon, day, hour, min, sec, sec_fraction, zone, now)
      if !year && !mon && !day && !hour && !min && !sec && !sec_fraction
        raise ArgumentError, 'no time information in #{date.inspect}'
      end
    
      # Open3.pipeline_start starts a list of commands as a pipeline.
  # No pipes are created for stdin of the first command and
  # stdout of the last command.
  #
  #   Open3.pipeline_start(cmd1, cmd2, ... [, opts]) {|wait_threads|
  #     ...
  #   }
  #
  #   wait_threads = Open3.pipeline_start(cmd1, cmd2, ... [, opts])
  #   ...
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
  # Example:
  #
  #   # Run xeyes in 10 seconds.
  #   Open3.pipeline_start('xeyes') {|ts|
  #     sleep 10
  #     t = ts[0]
  #     Process.kill('TERM', t.pid)
  #     p t.value #=> #<Process::Status: pid 911 SIGTERM (signal 15)>
  #   }
  #
  #   # Convert pdf to ps and send it to a printer.
  #   # Collect error message of pdftops and lpr.
  #   pdf_file = 'paper.pdf'
  #   printer = 'printer-name'
  #   err_r, err_w = IO.pipe
  #   Open3.pipeline_start(['pdftops', pdf_file, '-'],
  #                        ['lpr', '-P#{printer}'],
  #                        :err=>err_w) {|ts|
  #     err_w.close
  #     p err_r.read # error messages of pdftops and lpr.
  #   }
  #
  def pipeline_start(*cmds, **opts, &block)
    if block
      pipeline_run(cmds, opts, [], [], &block)
    else
      ts, = pipeline_run(cmds, opts, [], [])
      ts
    end
  end
  module_function :pipeline_start
    
      def test_block
    r = Open3.popen3(RUBY, '-e', 'STDOUT.print STDIN.read') {|i,o,e,t|
      i.print 'baz'
      i.close
      assert_equal('baz', o.read)
      'qux'
    }
    assert_equal('qux', r)
  end
    
        def test_crc
      Tempfile.create('test_zlib_gzip_file_crc') {|t|
        t.close
        Zlib::GzipWriter.open(t.path) {|gz| gz.print('foo') }
    }
    
            def to_feed(feed, current)
          if current.respond_to?(:itunes_owner=)
            _not_set_required_variables = not_set_required_variables
            if (required_variable_names - _not_set_required_variables).empty?
              return
            end
    
    def process_args
  if ARGV.first =~ %r{^-+h(?:elp)?$}
    puts usage
    exit 0
  elsif ARGV.length == 1
    $app_path = ARGV.first
  else
    puts usage
    exit 1
  end
end
    
          def call
        title('Gems')
        table(all_gem_names) do |gem, row|
          row.yellow if update_available?(gem)
          row << gem
          row << installed_gem_version(gem)
          row << '(update available)' if update_available?(gem)
        end
      end
    
          def calculate_column_widths(rows)
        num_columns = rows.map { |row| row.values.length }.max
        Array.new(num_columns) do |col|
          rows.map { |row| row.values[col].to_s.length }.max
        end
      end
    
            on roles(target_roles) do
          unless test '[ -f #{file.to_s.shellescape} ]'
            info 'Uploading #{prerequisite_file} to #{file}'
            upload! File.open(prerequisite_file), file
          end
        end
      end
    end
    
    desc 'Deploy a new release.'
task :deploy do
  set(:deploying, true)
  %w{ starting started
      updating updated
      publishing published
      finishing finished }.each do |task|
    invoke 'deploy:#{task}'
  end
end
task default: :deploy
