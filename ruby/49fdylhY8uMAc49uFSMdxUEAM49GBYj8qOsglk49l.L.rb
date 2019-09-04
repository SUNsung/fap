
        
              def find_matching_tag(tag)
        # Used primarily by developers testing beta macOS releases.
        if OS::Mac.prerelease? && ARGV.skip_or_later_bottles?
          generic_find_matching_tag(tag)
        else
          generic_find_matching_tag(tag) ||
            find_older_compatible_tag(tag)
        end
      end
    
        it 'When formula uses virtualenv and also `setuptools` resource' do
      expect_offense(<<~RUBY)
        class Foo < Formula
          url 'https://brew.sh/foo-1.0.tgz'
          homepage 'https://brew.sh'
    
      def option_defined?(name)
    options.include?(name)
  end
    
          expect(f.class.stable.deps.first.name).to eq('foo')
      expect(f.class.devel.deps.first.name).to eq('foo')
      expect(f.class.head.deps.first.name).to eq('foo')
    end
    
          expect(spec.deps.first.name).to eq('foo')
    end
    
    describe BottleSpecification do
  specify '#sha256' do
    checksums = {
      snow_leopard_32: 'deadbeef' * 8,
      snow_leopard:    'faceb00c' * 8,
      lion:            'baadf00d' * 8,
      mountain_lion:   '8badf00d' * 8,
    }
    
      let(:name) { 'foo' }
  let(:url) { 'https://example.com/foo.tar.gz' }
  let(:version) { '1.2.3' }
  let(:specs) { {} }
    
        if cmd_args
      arguments = cmd_args.split(' ')
    end
    
      #
  # Generate and compile the stager
  #
  def generate_bind_tcp(opts={})
    combined_asm = %Q^
      cld                    ; Clear the direction flag.
      and rsp, 0xFFFFFFFFFFFFFFF0 ; Ensure RSP is 16 byte aligned
      call start             ; Call start, this pushes the address of 'api_call' onto the stack.
      #{asm_block_api}
      start:
        pop rbp              ; pop off the address of 'api_call' for calling later.
      #{asm_bind_tcp(opts)}
      #{asm_block_recv(opts)}
    ^
    Metasm::Shellcode.assemble(Metasm::X64.new, combined_asm).encode_string
  end
    
        framework.db.create_payload(uuid_info)
  end
    
    require 'macho'
    
    module Msf
  autoload :Author, 'msf/core/author'
  autoload :Platform, 'msf/core/platform'
  autoload :Reference, 'msf/core/reference'
  autoload :SiteReference, 'msf/core/site_reference'
  autoload :Target, 'msf/core/target'
    
        if !data_service.is_local? && !data_service.active
      raise 'Data service #{data_service.name} is not online, and won't be set as active'
    end
    
        # determine if a target file path was passed in
    file_index = args.index('-o')
    unless file_index.nil?
      if args.length > file_index + 1
        # try to write the file to disk
        begin
          ::File.write(args[file_index + 1], output)
          print_good('Output written to #{args[file_index + 1]}')
        rescue
          print_error('Unable to write to #{args[file_index + 1]}')
        end
      else
        print_error('Missing file path for -o parameter')
      end
    end
    
              This vulnerability is a variant of MS15-020 (CVE-2015-0096). The created LNK file is
          similar except an additional SpecialFolderDataBlock is included. The folder ID set
          in this SpecialFolderDataBlock is set to the Control Panel. This is enough to bypass
          the CPL whitelist. This bypass can be used to trick Windows into loading an arbitrary
          DLL file.
    
      # Function for creating log folder and returning log path
  #-------------------------------------------------------------------------------
  def log_file
    # Get hostname
    host = session.sys.config.sysinfo['Computer']