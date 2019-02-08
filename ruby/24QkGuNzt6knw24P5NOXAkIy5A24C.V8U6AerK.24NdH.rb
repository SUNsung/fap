
        
              # This method returns an HTML safe string similar to what <tt>Array#join</tt>
      # would return. The array is flattened, and all items, including
      # the supplied separator, are HTML escaped unless they are HTML
      # safe, and the returned string is marked as HTML safe.
      #
      #   safe_join([raw('<p>foo</p>'), '<p>bar</p>'], '<br />')
      #   # => '<p>foo</p>&lt;br /&gt;&lt;p&gt;bar&lt;/p&gt;'
      #
      #   safe_join([raw('<p>foo</p>'), raw('<p>bar</p>')], raw('<br />'))
      #   # => '<p>foo</p><br /><p>bar</p>'
      #
      def safe_join(array, sep = $,)
        sep = ERB::Util.unwrapped_html_escape(sep)
    
        # Direct access to partial rendering.
    def render_partial(context, options, &block) #:nodoc:
      PartialRenderer.new(@lookup_context).render(context, options, block)
    end
    
              it 'cuts excessive digits in fractional part and keeps only 4 ones' do
            format('%#{f}', 12.12341111).should == '12.1234'
            format('%#{f}', -12.12341111).should == '-12.1234'
          end
    
      it_behaves_like :kernel_system, :system, KernelSpecs::Method.new
end
    
    describe 'main#define_method' do
  before :each do
    @code = 'define_method(:boom) { :bam }'
  end
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
        def initialize(*args)
      @s = StringScanner.new(*args)
    end
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      config.active_support.test_order = :random
    
          def initialize(argv)
        super
        config.silent = false
      end
    
    
  class << self
    # This method is invoked when subclass occurs.
    #
    # Lets us track all known FPM::Package subclasses
    def inherited(klass)
      @subclasses ||= {}
      @subclasses[klass.name.gsub(/.*:/, '').downcase] = klass
    end # def self.inherited
    
      option '--lint' , :flag, 'Check manifest with pkglint',
    :default => true
    
        # Copy all files from staging to BUILD dir
    Find.find(staging_path) do |path|
      src = path.gsub(/^#{staging_path}/, '')
      dst = build_path(src)
      copy_entry(path, dst, preserve=true, remove_destination=true)
      copy_metadata(path, dst)
    end
    
      def build!(params)
    # TODO(sissel): Support these somehow, perhaps with execs and files.
    self.scripts.each do |name, path|
      case name
        when 'pre-install'
        when 'post-install'
        when 'pre-uninstall'
        when 'post-uninstall'
      end # case name
    end # self.scripts.each
    
        safesystem('tar', *args)
  end # def output