
        
            formula_deps.each do |dep|
      fixopt(dep) unless dep.opt_prefix.directory?
    end
    
    class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
      private
    
        [@f.bin, @f.sbin, @f.lib].each { |d| clean_dir(d) if d.exist? }
    
      def self.path(name)
    Formulary.core_path(name)
  end
    
          it 'pass a custom build number to the tool' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_build_number(build_number: 24, xcodeproj: '.xcproject')
        end').runner.execute(:test)
    
          it 'returns the new version as return value' do
        result = Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'major')
        end').runner.execute(:test)
    
          # This gets the value of the block with the given key.
      def get(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$\r?\n?(.*?)\r?\n?^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        match  = regexp.match(@value)
        return nil if !match
        match[1]
      end
    
        # Paths
    def gem_path
      @gem_path ||= File.expand_path '..', File.dirname(__FILE__)
    end
    
            path = File.join save_to, name.sub(/\.less$/, '.scss')
        path = File.join File.dirname(path), '_' + File.basename(path)
        save_file(path, file)
        log_processed File.basename(path)
      end
    
    desc 'Start a dummy (test) Rails app server'
task :dummy_rails do
  require 'rack'
  require 'term/ansicolor'
  port = ENV['PORT'] || 9292
  puts %Q(Starting on #{Term::ANSIColor.cyan 'http://localhost:#{port}'})
  Rack::Server.start(
    config: 'test/dummy_rails/config.ru',
    Port: port)
end