
        
            def run(action_named: nil, action_class_ref: nil, parameter_map: nil)
      action_return = runner.execute_action(action_named, action_class_ref, [parameter_map], custom_dir: '.')
      return action_return
    end
    
        def finalize_session
      @threads.map(&:join)
    end
  end
end

    
            cmd << ['-am #{message.shellescape}']
        cmd << '--force' if options[:force]
        cmd << '-s' if options[:sign]
        cmd << tag.shellescape
        cmd << options[:commit].to_s if options[:commit]
    
        it 'recognizes an array as the only element of a command' do
      command = command_from_args(['/usr/local/bin/git', 'git'])
      expect(command).to eq('/usr/local/bin/git')
    end
    
    # Here be helper
    
    shelljoin_testcases = [
  {
    'it' => '(#1) on array with entry with space',
    'it_result' => {
      'windows' => 'wraps this entry in double quotes',
      'other'   => 'escapes the space in this entry'
    },
    'input' => ['a', 'b c', 'd'],
    'expect' => {
      'windows' => 'a 'b c' d',
      'other'   => 'a b\ c d'
    }
  },
  {
    'it' => '(#2) on array with entry with string wrapped in double quotes and space',
    'it_result' => {
      'windows' => 'wraps the entry with space in quote, and doubles the double quotes',
      'other'   => 'escapes the double quotes and escapes the space'
    },
    'input' => ['a', ''b' c', 'd'],
    'expect' => {
      'windows' => 'a '''b'' c' d',
      'other'   => 'a \'b\'\ c d'
    }
  },
  {
    'it' => '(#3) on array with entry with string wrapped in single quotes and space',
    'it_result' => {
      'windows' => 'no changes',
      'other'   => 'escapes the single quotes and space'
    },
    'input' => ['a', ''b' c', 'd'],
    'expect' => {
      'windows' => 'a \''b' c\' d',
      'other'   => 'a \\'b\\'\\ c d'
    }
  },
  # https://github.com/ruby/ruby/blob/ac543abe91d7325ace7254f635f34e71e1faaf2e/test/test_shellwords.rb#L67-L68
  {
    'it' => '(#4) on array with entry that is `$$`',
    'it_result' => {
      'windows' => 'the result includes the process id',
      'other'   => 'the result includes the process id'
    },
    'input' => ['ps', '-p', $$],
    'expect' => {
      'windows' => 'ps -p #{$$}',
      'other'   => 'ps -p #{$$}'
    }
  }
]
    
    module Cert
  class CommandsGenerator
    include Commander::Methods