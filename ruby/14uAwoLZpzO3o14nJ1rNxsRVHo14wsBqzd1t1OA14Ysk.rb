
        
            # Similar to Jekyll::Document#cleaned_relative_path.
    # Generates a relative path with the collection's directory removed when applicable
    #   and additionally removes any multiple periods in the string.
    #
    # NOTE: `String#gsub!` removes all trailing periods (in comparison to `String#chomp!`)
    #
    # Examples:
    #   When `relative_path` is '_methods/site/my-cool-avatar...png':
    #     cleaned_relative_path
    #     # => '/site/my-cool-avatar'
    #
    # Returns the cleaned relative path of the static file.
    def cleaned_relative_path
      @cleaned_relative_path ||= begin
        cleaned = relative_path[0..-extname.length - 1]
        cleaned.gsub!(%r!\.*\z!, '')
        cleaned.sub!(@collection.relative_directory, '') if @collection
        cleaned
      end
    end
    
          should 'support legacy enable_coderay... for now' do
        override = {
          'markdown' => 'kramdown',
          'kramdown' => {
            'enable_coderay' => true,
          },
        }
    
          Jekyll.logger.info 'Total allocated: #{total_allocated_output} (#{report.total_allocated} objects)'.cyan
      Jekyll.logger.info 'Total retained:  #{total_retained_output} (#{report.total_retained} objects)'.cyan
    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
    # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
          #
    
              # Sort all the keys by length so that the directory closest to
          # the root is exported first. Also, remove duplicates so that
          # checkexports will work properly.
          dirmap.each do |dirs, _|
            dirs.uniq!
            dirs.sort_by! { |d| d.length }
          end
    
      if !Vagrant::Util::Which.which('bsdtar')
    c.filter_run_excluding :bsdtar
  end
    
      it 'provides the metadata associated with a box' do
    data = { 'foo' => 'bar' }
    
          # 5. If Vagrant still has not found any usable providers, it will error.
    
          it 'should run with disabling parallelization if explicit' do
        with_temp_env('VAGRANT_NO_PARALLEL' => nil) do
          expect(Vagrant::BatchAction).to receive(:new).with(false).and_return(batch)
          expect(batch).to receive(:run)
    
      describe '#install' do
    let(:plugins){ {'my-plugin' => {'gem_version' => '> 0'}} }
    
        it 'ignores HOMEBREW_SKIP_OR_LATER_BOTTLES on release versions', :needs_macos do
      allow(ARGV).to receive(:skip_or_later_bottles?).and_return(true)
      allow(OS::Mac).to receive(:prerelease?).and_return(false)
      subject[:mavericks] = 'foo'
      expect(subject.send(:find_matching_tag, :mavericks)).to eq(:mavericks)
      expect(subject.send(:find_matching_tag, :yosemite)).to eq(:mavericks)
    end
  end
end

    
        it 'doesn't adds the dependency without OS version requirements' do
      spec.uses_from_macos('foo')
      spec.uses_from_macos('bar' => :head)
    
            klass = begin
          const_get(command.to_s.capitalize.to_sym)
        rescue NameError
          # External command is a stand-alone Ruby script.
          return
        end
    
          path = if timestamp == :latest
        Pathname.glob(metadata_versioned_path(version: version).join('*')).max
      else
        timestamp = new_timestamp if timestamp == :now
        metadata_versioned_path(version: version).join(timestamp)
      end
    
      desc 'Remove and archive rolled-back release.'
  task :cleanup_rollback do
    on release_roles(:all) do
      last_release = capture(:ls, '-xt', releases_path).split.first
      last_release_path = releases_path.join(last_release)
      if test '[ `readlink #{current_path}` != #{last_release_path} ]'
        execute :tar, '-czf',
                deploy_path.join('rolled-back-release-#{last_release}.tar.gz'),
                last_release_path
        execute :rm, '-rf', last_release_path
      else
        debug 'Last release is the current release, skip cleanup_rollback.'
      end
    end
  end
    
    Then(/the output matches '([^']*)' followed by '([^']*)'/) do |expected, followedby|
  expect(@output).to match(/#{expected}.*#{followedby}/m)
end
    
    Given(/^file '(.*?)' exists in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{file_shared_path.dirname}')
  run_vagrant_command('touch #{file_shared_path}')
end
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
        def top_level_tasks
      if tasks_without_stage_dependency.include?(@top_level_tasks.first)
        @top_level_tasks
      else
        @top_level_tasks.unshift(ensure_stage.to_s)
      end
    end
    
          def gets
        return unless $stdin.tty?
    
          def remember_location(key)
        location = caller.find do |line|
          IGNORED_LOCATIONS.none? { |i| line.include?(i) }
        end
        (locations[key] ||= []) << location
      end
    
      describe '#new_identifier' do
    let(:source) do
      'alias foo bar'
    end
    
            def correct(processed_source, node)
          return if %i[kwarg kwoptarg].include?(node.type)
    
          it_behaves_like 'matching'
    end
    
      context 'when a unreferenced variable is reassigned in same branch ' \
          'and referenced after the branching' do
    it 'registers an offense for the unreferenced assignment' do
      expect_offense(<<~RUBY)
        def some_method(flag)
          if flag
            foo = 1
            ^^^ Useless assignment to variable - `foo`.
            foo = 2
          end
    
            def autocorrect(node)
          lambda do |corrector|
            node_range = if node.respond_to?(:heredoc?) && node.heredoc?
                           range_by_whole_lines(node.loc.heredoc_body)
                         else
                           range_by_whole_lines(node.source_range)
                         end
    
        it 'allows multiple calls' do
      SetWorker.set(queue: :foo).set(bar: 'xyz').perform_async
    
        it 'gracefully kills' do
      mgr = Mgr.new
    
          s = '#{key}:workers'
      data = Sidekiq.dump_json({ 'payload' => {}, 'queue' => 'default', 'run_at' => (Time.now.to_i - 2*60*60) })
      Sidekiq.redis do |c|
        c.multi do
          c.hmset(s, '5678', data)
          c.hmset('b#{s}', '5678', data)
        end
      end
    
      it 'allows delayed delivery of ActionMailer mails' do
    assert_equal [], Sidekiq::Queue.all.map(&:name)
    q = Sidekiq::Queue.new
    assert_equal 0, q.size
    UserMailer.delay.greetings(1, 2)
    assert_equal ['default'], Sidekiq::Queue.all.map(&:name)
    assert_equal 1, q.size
  end
    
        @name = nil
    @architecture = 'native'
    @description = 'no description given'
    @version = nil
    @epoch = nil
    @iteration = nil
    @url = nil
    @category = 'default'
    @license = 'unknown'
    @vendor = 'none'
    
    