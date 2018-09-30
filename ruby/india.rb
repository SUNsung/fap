
        
                result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            grouping: 'grouping',
            build_number: 'build_number',
            prefix: 'prefix',
          })
        end').runner.execute(:test)
    
            inner_command = 'git describe --tags `git rev-list --tags --max-count=1`'
        # this is not really the command that would have been executed, but a 'fabricated' representation for tests (by Actions.sh) that includes both command that would have been run
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD'
        expect(result).to eq(pseudocommand)
      end
    
          context 'without parameters' do
        it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add .', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add
          end').runner.execute(:test)
        end
      end
    
          context 'with valid path to compile_commands.json' do
        context 'with no path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint( compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json' )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && oclint -report-type=html -o=oclint_report.html' }
    
            expected = 'slather coverage
                    --build-directory #{build_dir.shellescape}
                    --source-directory #{source_dir.shellescape}
                    --output-directory #{output_dir.shellescape}
                    --ignore #{ignore.shellescape}
                    --input-format bah
                    --scheme #{scheme.shellescape}
                    #{proj.shellescape}'.gsub(/\s+/, ' ')
        expect(result).to eq(expected)
      end
    
        it 'adds an environment Hash at the beginning' do
      message = 'A message'
      command = command_from_args({ 'PATH' => '/usr/local/bin' }, 'git', 'commit', '-m', message)
      expect(command).to eq('PATH=/usr/local/bin git commit -m #{message.shellescape}')
    end
    
        context 'string formats' do
      it 'determines the maximum number of characters to be copied from the string' do
        format('%.1p', [1]).should == '['
        format('%.2p', [1]).should == '[1'
        format('%.10p', [1]).should == '[1]'
        format('%.0p', [1]).should == ''
    
      it 'accepts a Rational' do
    sleep(Rational(1, 9)).should be_close(0, 2)
  end
    
        it 'returns true when passed ?w if the argument is readable by the effective uid' do
      Kernel.test(?w, @tmp_file).should be_true
    end
    
        if other.respond_to?(:to_str)
      return true if to_str == other.to_str
    end
    
    require 'commands'
    
      prepend Compat
end
