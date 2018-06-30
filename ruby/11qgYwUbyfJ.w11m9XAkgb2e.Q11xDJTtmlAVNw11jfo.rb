          # Verify the box exists that we want to repackage
          box = @env.boxes.find(box_name, box_provider, '= #{box_version}')
          if !box
            raise Vagrant::Errors::BoxNotFoundWithProviderAndVersion,
              name: box_name,
              provider: box_provider.to_s,
              version: box_version
          end
    
    module VagrantPlugins
  module CommandCap
    class Command < Vagrant.plugin('2', :command)
      def self.synopsis
        'checks and executes capability'
      end
    
        it 'raises TypeError exception if buffer is not String' do
      lambda { [65].pack('ccc', buffer: []) }.should raise_error(
        TypeError, 'buffer must be String, not Array')
    end
    
        def initialize(message = nil)
      super
      @ivar = 1
    end
    
      def self.block_device
    raise 'Could not find a block device' unless @block
    yield @block
  end
    
    describe 'File.pipe?' do
  it 'returns false if file does not exist' do
    File.pipe?('I_am_a_bogus_file').should == false
  end
    
    describe 'String#downcase!' do
  it 'modifies self in place' do
    a = 'HeLlO'
    a.downcase!.should equal(a)
    a.should == 'hello'
  end
    
        it 'returns nil if the class has no superclass' do
      @s.rb_class_superclass(BasicObject).should be_nil
    end
  end
    
      class SubSub < Sub
    def call_super_method
      :subsubclass_method
    end
  end
    
      def apply
    dir = Pathname.pwd
    resource.unpack do
      patch_dir = Pathname.pwd
      if patch_files.empty?
        children = patch_dir.children
        if children.length != 1 || !children.first.file?
          raise MissingApplyError, <<~EOS
            There should be exactly one patch file in the staging directory unless
            the 'apply' method was used one or more times in the patch-do block.
          EOS
        end
        patch_files << children.first.basename
      end
      dir.cd do
        patch_files.each do |patch_file|
          ohai 'Applying #{patch_file}'
          patch_file = patch_dir/patch_file
          safe_system 'patch', '-g', '0', '-f', '-#{strip}', '-i', patch_file
        end
      end
    end
  end
    
      def load_logs(dir)
    logs = {}
    if dir.exist?
      dir.children.sort.each do |file|
        contents = file.size? ? file.read : 'empty log'
        # small enough to avoid GitHub 'unicorn' page-load-timeout errors
        max_file_size = 1_000_000
        contents = truncate_text_to_approximate_size(contents, max_file_size, front_weight: 0.2)
        logs[file.basename.to_s] = { content: contents }
      end
    end
    raise 'No logs.' if logs.empty?
    logs
  end
    
        def parse_symbol_spec(spec, tags)
      case spec
      when :clt
        odisabled ''depends_on :clt''
      when :tex
        odisabled ''depends_on :tex''
      when :libltdl
        output_disabled(spec, 'libtool')
      when :apr
        output_disabled(spec, 'apr-util')
      when :fortran
        output_disabled(spec, 'gcc')
      when :gpg
        output_disabled(spec, 'gnupg')
      when :hg
        output_disabled(spec, 'mercurial')
      when :mpi
        output_disabled(spec, 'open-mpi')
      when :python, :python2
        output_disabled(spec, 'python@2')
      when :python3
        output_disabled(spec, 'python')
      when :ant, :autoconf, :automake, :bsdmake, :cairo, :emacs, :expat,
           :fontconfig, :freetype, :libtool, :libpng, :mysql, :perl, :pixman,
           :postgresql, :rbenv, :ruby
        output_disabled(spec)
      else
        super
      end
    end
    
      context 'with default reaction' do
    before(:each) do
      mock_app do
        use Rack::Protection::CookieTossing
        run DummyApp
      end
    end