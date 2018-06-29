
        
        Benchmark.ips do |x|
  x.report('no body include?') { CONTENT_NOT_CONTAINING.include?('<body') }
  x.report('no body regexp')   { CONTENT_NOT_CONTAINING =~ /<\s*body/ }
  x.compare!
end
    
                Process.detach(pid)
            Jekyll.logger.info 'Server detached with pid '#{pid}'.', \
                               'Run `pkill -f jekyll' or `kill -9 #{pid}'' \
                               ' to stop the server.'
          else
            t = Thread.new { server.start }
            trap('INT') { server.shutdown }
            t.join
          end
        end
    
              @new_body.each do |line|
            if !@livereload_added && line['<head']
              line.gsub!(HEAD_TAG_REGEX) do |match|
                %(#{match}#{template.result(binding)})
              end
    
    module BuildEnvironmentDSL
  def env(*settings)
    @env ||= BuildEnvironment.new
    @env.merge(settings)
  end
end
    
      # True if a {Formula} is being built with {Formula.devel} instead of {Formula.stable}.
  # <pre>args << '--some-beta' if build.devel?</pre>
  def devel?
    include? 'devel'
  end
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
        # Exclude cache, logs, and repository, if they are located under the prefix.
    [HOMEBREW_CACHE, HOMEBREW_LOGS, HOMEBREW_REPOSITORY].each do |dir|
      dirs.delete dir.relative_path_from(HOMEBREW_PREFIX).to_s
    end
    dirs.delete 'etc'
    dirs.delete 'var'
    
        results.map do |name|
      begin
        formula = Formulary.factory(name)
        canonical_name = formula.name
        canonical_full_name = formula.full_name
      rescue
        canonical_name = canonical_full_name = name
      end
      # Ignore aliases from results when the full name was also found
      if aliases.include?(name) && results.include?(canonical_full_name)
        next
      elsif (HOMEBREW_CELLAR/canonical_name).directory?
        pretty_installed(name)
      else
        name
      end
    end.compact
  end
end

    
      def migrate_tap_migration
    report[:D].each do |full_name|
      name = full_name.split('/').last
      next unless (dir = HOMEBREW_CELLAR/name).exist? # skip if formula is not installed.
      next unless new_tap_name = tap.tap_migrations[name] # skip if formula is not in tap_migrations list.
      tabs = dir.subdirs.map { |d| Tab.for_keg(Keg.new(d)) }
      next unless tabs.first.tap == tap # skip if installed formula is not from this tap.
      new_tap = Tap.fetch(new_tap_name)
      new_tap.install unless new_tap.installed?
      # update tap for each Tab
      tabs.each { |tab| tab.tap = new_tap }
      tabs.each(&:write)
    end
  end
    
          it 'does switch to plain text when xml is toggled off' do
        result = Fastlane::FastFile.new.parse('lane :test do
            cloc(xml: false)
          end').runner.execute(:test)
    
      # Flushes all queued logs to the wrapped logger.
  def flush
    @messages.each {|(l, m)| @inner.log(l, m)}
  end