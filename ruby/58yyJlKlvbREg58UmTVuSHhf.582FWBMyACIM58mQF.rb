
        
                [
          'This will automatically tag your build with the following format: `<grouping>/<lane>/<prefix><build_number>`, where:'.markdown_preserve_newlines,
          list,
          'For example, for build 1234 in the 'appstore' lane, it will tag the commit with `builds/appstore/1234`.'
        ].join('\n')
      end
    
        if ARGV.include?('--new-issue') || ARGV.switch?('n')
      url = create_issue(f.tap, '#{f.name} failed to build on #{MacOS.full_version}', url)
    end
    
            Generate Homebrew's manpages.
      EOS
      switch '--fail-if-changed',
        description: 'Return a failing status code if changes are detected in the manpage outputs. This '\
                     'can be used for CI to be notified when the manpages are out of date. Additionally, '\
                     'the date used in new manpages will match those in the existing manpages (to allow '\
                     'comparison without factoring in the date).'
      switch '--link',
        description: 'This is now done automatically by `brew update`.'
    end
  end
    
      def_delegator :@paths, :each