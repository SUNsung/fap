
        
        def pre_pr(url)
  url[-1, 1] == FORWARD_SLASH ? url : File.dirname(url)
end
    
    DOC_PATH = File.join(File.expand_path(__dir__), '_puppies', 'rover.md')
COL_PATH = File.join(File.expand_path(__dir__), '_puppies')
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
          def before_step(step)
        @current_step = step
      end
    
              it 'raises an exception' do
            expect do
              Fastlane::FastFile.new.parse('lane :test do
                  carthage(command: '#{command}', output: 'bla.framework.zip')
                end').runner.execute(:test)
            end.to raise_error('Output option is available only for 'archive' command.')
          end
        end
      end
    
          it 'shellescapes the exclude_dirs correctly' do
        directory = 'My Dir'
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['#{directory}'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir #{directory.shellescape}')
      end
    
        def help_default_value
      return '#{self.default_value} *'.strip if self.default_value_dynamic
      return '' if self.default_value.nil?
      return '''' if self.default_value.instance_of?(String) && self.default_value.empty?
      return ':#{self.default_value}' if self.default_value.instance_of?(Symbol)
    
    require 'colored'
require 'shellwords'
    
              sent = 0
          case protocol
          when 'tcp'
            sent = send_request_tcp(req)
          when 'udp'
            sent = send_request_udp(req)
          else
            raise ::RuntimeError, 'Kerberos Client: unknown transport protocol'
          end
    
      it 'calls #to_int on seed' do
    srand(3.8)
    srand.should == 3
    
    desc 'Default deploy task'
task :deploy do
  # Check if preview posts exist, which should not be published
  if File.exists?('.preview-mode')
    puts '## Found posts in preview mode, regenerating files ...'
    File.delete('.preview-mode')
    Rake::Task[:generate].execute
  end
    
      class Blockquote < Liquid::Block
    FullCiteWithTitle = /(\S.*)\s+(https?:\/\/)(\S+)\s+(.+)/i
    FullCite = /(\S.*)\s+(https?:\/\/)(\S+)/i
    AuthorTitle = /([^,]+),([^,]+)/
    Author =  /(.+)/
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
      # scripts_path and write_scripts cribbed from deb.rb
  def scripts_path(path=nil)
    @scripts_path ||= build_path('Scripts')
    FileUtils.mkdir(@scripts_path) if !File.directory?(@scripts_path)
    
      # Output a zipfile.
  def output(output_path)
    output_check(output_path)
    realpath = Pathname.new(output_path).realdirpath.to_s
    ::Dir.chdir(staging_path) do
      safesystem('zip', '-9r', realpath, '.')
    end
  end # def output
end # class FPM::Package::Tar

    
        (@source.empty? || @target.empty? || options.name.empty?) &&
      abort('Must specify package name, source and output')