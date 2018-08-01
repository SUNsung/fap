
        
                if params[:default_keychain]
          # if there is no default keychain - setting the original will fail - silent this error
          begin
            Actions.lane_context[Actions::SharedValues::ORIGINAL_DEFAULT_KEYCHAIN] = Fastlane::Actions.sh('security default-keychain', log: false).strip
          rescue
          end
          commands << Fastlane::Actions.sh('security default-keychain -s #{keychain_path}', log: false)
        end
    
          it 'get HG revision number' do
        result = Fastlane::FastFile.new.parse('lane :test do
          get_build_number_repository(
            use_hg_revision_number: true
          )
        end').runner.execute(:test)
    
            expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::VERSION_NUMBER]).to match(/cd .* && agvtool new-marketing-version 1.0.1/)
      end
    
      describe 'DATA_PTR' do
    it 'returns the struct data' do
      a = @s.typed_wrap_struct(1024)
      @s.typed_get_struct_data_ptr(a).should == 1024
    end
  end
end

    
      it 'adds a directory to $LOAD_PATH' do
    dir = tmp('rubylib/incl')
    ENV['RUBYLIB'] = @pre + dir
    paths = ruby_exe('puts $LOAD_PATH').lines.map(&:chomp)
    paths.should include(dir)
  end
    
        header = Gem::Package::TarHeader.new(:name => name, :mode => mode,
                                         :size => 0, :typeflag => '2',
                                         :linkname => target,
                                         :prefix => prefix,
                                         :mtime => ENV['SOURCE_DATE_EPOCH'] ? Time.at(ENV['SOURCE_DATE_EPOCH'].to_i).utc : Time.now).to_s
    
      def test_chdir
    assert_in_out_err(%w(-C), '', [], /Can't chdir/)
    
            File.open(@path,'a').close unless File.exist?(@path)
        reload
      end
    
          when /^(\$[^.]*)$/
        # global var
        regmessage = Regexp.new(Regexp.quote($1))
        candidates = global_variables.collect{|m| m.to_s}.grep(regmessage)
    
    def assert_normal_exit(testsrc, *rest, timeout: nil, **opt)
  newtest
  message, ignore_signals = rest
  message ||= ''
  show_progress(message) {
    faildesc = nil
    filename = make_srcfile(testsrc)
    old_stderr = $stderr.dup
    timeout_signaled = false
    begin
      $stderr.reopen('assert_normal_exit.log', 'w')
      io = IO.popen('#{@ruby} -W0 #{filename}')
      pid = io.pid
      th = Thread.new {
        io.read
        io.close
        $?
      }
      if !th.join(timeout)
        Process.kill :KILL, pid
        timeout_signaled = true
      end
      status = th.value
    ensure
      $stderr.reopen(old_stderr)
      old_stderr.close
    end
    if status && status.signaled?
      signo = status.termsig
      signame = Signal.list.invert[signo]
      unless ignore_signals and ignore_signals.include?(signame)
        sigdesc = 'signal #{signo}'
        if signame
          sigdesc = 'SIG#{signame} (#{sigdesc})'
        end
        if timeout_signaled
          sigdesc << ' (timeout)'
        end
        faildesc = pretty(testsrc, 'killed by #{sigdesc}', nil)
        stderr_log = File.read('assert_normal_exit.log')
        if !stderr_log.empty?
          faildesc << '\n' if /\n\z/ !~ faildesc
          stderr_log << '\n' if /\n\z/ !~ stderr_log
          stderr_log.gsub!(/^.*\n/) { '| ' + $& }
          faildesc << stderr_log
        end
      end
    end
    faildesc
  }
end
    
      # Before we load the schema, define the timestamp_id function.
  # Idiomatically, we might do this in a migration, but then it
  # wouldn't end up in schema.rb, so we'd need to figure out a way to
  # get it in before doing db:setup as well. This is simpler, and
  # ensures it's always in place.
  Rake::Task['db:schema:load'].enhance ['db:define_timestamp_id']
    
      has_one :icon, serializer: ActivityPub::ImageSerializer
    
        existence_maps.each do |group|
      existing_one = group.key(true)
    
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
    
          it 'selects using the string when a host filter is present' do
        dsl.set :filter, host: 'server.local'
        SSHKit::Coordinator.expects(:new).with(['server.local']).returns(@coordinator)
        dsl.on('server.local')
      end
    
            def on_send(node)
          return unless multiple_compare?(node)
    
            def parent_block_node(node)
          node.each_ancestor(:block).first
        end
      end
    end
  end
end

    
            MSG = 'Do not freeze immutable objects, as freezing them has no ' \
              'effect.'.freeze
    
            inspect_source(expected_annotations.plain_source, file)
        actual_annotations =
          expected_annotations.with_offense_annotations(cop.offenses)
        expect(actual_annotations.to_s).to eq(expected_annotations.to_s)
      end