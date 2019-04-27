
        
        FORWARD_SLASH = '/'.freeze
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
          def site
        @site_drop ||= SiteDrop.new(@obj)
      end
    
        class Agents::DotBar < Agent
      cannot_be_scheduled!
    
        it 'in the future' do
      expect(relative_distance_of_time_in_words(Time.now+5.minutes)).to eq('in 5m')
    end
  end
end

    
                scenario_import.merges = {
              '0' => {
                'name' => 'a new name',
                'schedule' => '6pm',
                'keep_events_for' => 2.days.to_i.to_s,
                'disabled' => 'true',
                'options' => weather_agent_options.merge('api_key' => 'foo').to_json
              }
            }
    
        it 'work with set FAILED_JOBS_TO_KEEP env variable' do
      expect { @scheduler.send(:cleanup_failed_jobs!) }.to change(Delayed::Job, :count).by(-1)
      expect { @scheduler.send(:cleanup_failed_jobs!) }.to change(Delayed::Job, :count).by(0)
      expect(@keep.id).to eq(Delayed::Job.order(:failed_at)[0].id)
    end
    
          expect(Utils.unindent(<<-MD)).to eq('Hello World\nThis is\nnot indented')
        Hello World
        This is
        not indented
      MD
    
            def initialize(env, config)
          @env    = env
          @config = config
        end
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                # Don't set the value if it is the unset value, either.
                value = obj.instance_variable_get(key)
                result.instance_variable_set(key, value) if value != UNSET_VALUE
              end
            end
          end
    
      if ENV['HOMEBREW_INTEGRATION_TEST']
    command_name '#{ENV['HOMEBREW_INTEGRATION_TEST']} (#{$PROCESS_ID})'
    
      def intersect(ray, isect)
    d = -@p.vdot(@n)
    v = ray.dir.vdot(@n)
    v0 = v
    if v < 0.0 then
      v0 = -v
    end
    if v0 < 1.0e-17 then
      return
    end
    
    $p = []
$b = []
$no = 0
    
    desc 'Clean out caches: .pygments-cache, .gist-cache, .sass-cache'
task :clean do
  rm_rf [Dir.glob('.pygments-cache/**'), Dir.glob('.gist-cache/**'), Dir.glob('.sass-cache/**'), 'source/stylesheets/screen.css']
end
    
        def paragraphize(input)
      '<p>#{input.lstrip.rstrip.gsub(/\n\n/, '</p><p>').gsub(/\n/, '<br/>')}</p>'
    end
  end
end
    
          # Create an Atom-feed for each index.
      feed = CategoryFeed.new(self, self.source, category_dir, category)
      feed.render(self.layouts, site_payload)
      feed.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << feed
    end
    
        def get_cached_gist(gist, file)
      return nil if @cache_disabled
      cache_file = get_cache_file_for gist, file
      File.read cache_file if File.exist? cache_file
    end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
    # Add our files (should be in the current directory):
package.input('my-executable=/usr/bin/')
package.input('my-library.so=/usr/lib/')
    
        # Create the .txz package archive from the files in staging_path.
    File.open(output_path, 'wb') do |file|
      XZ::StreamWriter.new(file) do |xz|
        FPM::Util::TarWriter.new(xz) do |tar|
          # The manifests must come first for pkg.
          add_path(tar, '+COMPACT_MANIFEST',
                   File.join(staging_path, '+COMPACT_MANIFEST'))
          add_path(tar, '+MANIFEST',
                   File.join(staging_path, '+MANIFEST'))
    
        args = [ '-B', build_path('build-info'), '-c', build_path('comment'), '-d', build_path('description'), '-f', build_path('packlist'), '-I', '/opt/local', '-p', staging_path,  '-U', '#{cwd}/#{name}-#{self.version}-#{iteration}.tgz' ]
    safesystem('pkg_create', *args)