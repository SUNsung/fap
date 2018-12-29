
        
          def test_file_exists(path)
    exists?('f', path)
  end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          private
    
          def primary
        self if fetch(:primary)
      end
    
      it 'ignores single-line hashes' do
    expect_no_offenses('{a: 1, b: 2}')
  end
    
            expect(cop.offenses.size).to eq(1)
        expect(cop.highlights).to eq([close])
        expect(cop.messages).to eq([described_class::SAME_LINE_MESSAGE])
      end
    
            def valid_argument_types?
          [first, second].all? do |argument|
            argument.pair_type? || argument.kwsplat_type?
          end
        end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end