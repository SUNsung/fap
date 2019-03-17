
        
        module ActionView
  module Helpers
    module Tags # :nodoc:
      class CollectionRadioButtons < Base # :nodoc:
        include CollectionHelpers
    
          def line_number
        @line_number ||=
          if file_name
            regexp = /#{Regexp.escape File.basename(file_name)}:(\d+)/
            $1 if message =~ regexp || backtrace.find { |line| line =~ regexp }
          end
      end
    
            def self.[](type)
          if type.is_a?(self)
            type
          else
            new(type)
          end
        end
    
          test 'when layout is specified as a proc and the proc returns false, use no layout instead of inherited layout' do
        controller = WithProcReturningFalse.new
        controller.process(:index)
        assert_equal 'Hello false!', controller.response_body
      end
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            prefix: '#{prefix}',
          })
        end').runner.execute(:test)
    
          it 'handles the extensions parameter with multiple elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{m,h}')
      end
    
            context 'with given path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint(
                compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
                oclint_path: 'test/bin/oclint'
              )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && test/bin/oclint -report-type=html -o=oclint_report.html' }
    
              expect(config[:true_value]).to eq('true')
          expect(config[:true_value2]).to eq('YES')
          expect(config[:false_value]).to eq('false')
          expect(config[:false_value2]).to eq('NO')
        end
    
        when nil
      dprint('Invalid control packet: #{pkt.unpack('H*')[0]}')
    end
  end
    
      #
  # Move these into an IPMI stack or mixin at some point
  #
    
                res
          end
    
              # Decodes the flags field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_flags(input)
            input.value[0].value.to_i
          end
    
                seq.to_der
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
          def title
        '#{@page.title}'
      end
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
          @CONF[:IRB_RC].call(irb.context) if @CONF[:IRB_RC]
      @CONF[:MAIN_CONTEXT] = irb.context
    
    module Gollum
  VERSION = '4.1.4'
    
        flags = []
    args = []
    while rc_args.size > 0 do
      arg = rc_args.shift
      opt = self.class.find_option(arg)
      if opt and not opt.flag?
        flags.push(arg)
        flags.push(rc_args.shift)
      elsif opt or arg[0] == '-'
        flags.push(arg)
      else
        args.push(arg)
      end
    end
    
      def to_s(format=nil)
    return super('NAME_FULLVERSION_ARCH.TYPE') if format.nil?
    return super(format)
  end
    
      # Copy a path.
  #
  # Files will be hardlinked if possible, but copied otherwise.
  # Symlinks should be copied as symlinks.
  def copy(source, destination)
    logger.debug('Copying path', :source => source, :destination => destination)
    directory = File.dirname(destination)
    # lstat to follow symlinks
    dstat = File.stat(directory) rescue nil
    if dstat.nil?
      FileUtils.mkdir_p(directory, :mode => 0755)
    elsif dstat.directory?
      # do nothing, it's already a directory!
    else
      # It exists and is not a directory. This is probably a user error or a bug.
      readable_path = directory.gsub(staging_path, '')
      logger.error('You wanted to copy a file into a directory, but that's not a directory, it's a file!', :path => readable_path, :stat => dstat)
      raise FPM::InvalidPackageConfiguration, 'Tried to treat #{readable_path} like a directory, but it's a file!'
    end
    
        wordsize = case @architecture
    when nil, 'native'
      %x{getconf LONG_BIT}.chomp # 'native' is current arch
    when 'amd64'
      '64'
    when 'i386'
      '32'
    else
      %x{getconf LONG_BIT}.chomp # default to native, the current arch
    end
    
        temp_info = pkginfo_template_path
    
      def generate_mtree
    ::Dir.chdir(build_path) do
      cmd = 'LANG=C bsdtar '
      cmd += '-czf .MTREE '
      cmd += '--format=mtree '
      cmd += '--options='!all,use-set,type,uid,gid,mode,time,size,md5,sha256,link' '
      cmd += ::Dir.entries('.').reject{|entry| entry =~ /^\.{1,2}$/ }.join(' ')
      safesystem(cmd)
    end
  end # def generate_mtree
    
      # This method is used by the puppet manifest template
  def puppetsort(hash)
    # TODO(sissel): Implement sorting that follows the puppet style guide
    # Such as, 'ensure' goes first, etc.
    return hash.to_a
  end # def puppetsort
    
        # Make one file. The installscript can unpack itself.
    `cat #{install_script} #{payload} > #{output_path}`
    FileUtils.chmod('+x', output_path)
  end
    
        task(options.name) do |_, task_args|
      block.call(*[options, task_args].first(block.arity)) if block_given?
      abort('Must specify args') unless options.respond_to?(:args)
      @args = options.delete_field(:args)
      run_cli
    end
  end