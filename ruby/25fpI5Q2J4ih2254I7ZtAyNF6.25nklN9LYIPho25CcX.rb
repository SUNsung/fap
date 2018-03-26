old_trap = trap('INT') { exit! 130 }
    
      def origin
    Homebrew.git_origin || '(none)'
  end
    
          puts_columns Array(result)
    else
      query = ARGV.first
      rx = query_regexp(query)
      local_results = search_formulae(rx)
      puts_columns(local_results)
      tap_results = search_taps(rx)
      puts_columns(tap_results)
    
        if initial_revision != current_revision
      puts 'Updated Homebrew from #{shorten_revision(initial_revision)} to #{shorten_revision(current_revision)}.'
      updated = true
    end
    
      def self.factory(name)
    Formulary.factory(name)
  end
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
      describe '::binary_osxfuse_installed?' do
    it 'returns false if fuse.h does not exist' do
      allow(File).to receive(:exist?).and_return(false)
      expect(described_class).not_to be_binary_osxfuse_installed
    end