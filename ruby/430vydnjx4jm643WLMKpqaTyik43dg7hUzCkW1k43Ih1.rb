
        
          # True if a {Formula} is being built in C++11 mode.
  def cxx11?
    include?('c++11') && option_defined?('c++11')
  end
    
      def plist_caveats
    s = []
    if f.plist || (keg && keg.plist_installed?)
      destination = if f.plist_startup
        '/Library/LaunchDaemons'
      else
        '~/Library/LaunchAgents'
      end
    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
        checks.inject_dump_stats! if ARGV.switch? 'D'
    
          puts_columns Array(result)
    else
      query = ARGV.first
      rx = query_regexp(query)
      local_results = search_formulae(rx)
      puts_columns(local_results)
      tap_results = search_taps(rx)
      puts_columns(tap_results)
    
        dump_formula_report :A, 'New Formulae'
    dump_formula_report :M, 'Updated Formulae'
    dump_formula_report :R, 'Renamed Formulae'
    dump_formula_report :D, 'Deleted Formulae'
  end
    
        def self.join(*args)
      PARSER.join(*args)
    end
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
          expect(response).to redirect_to(settings_preferences_path)
      user.reload
      expect(user.settings['boost_modal']).to be true
      expect(user.settings['delete_modal']).to be false
    end
  end
end

    
    namespace :emojis do
  desc 'Generate a unicode to filename mapping'
  task :generate do
    source = 'http://www.unicode.org/Public/emoji/5.0/emoji-test.txt'
    codes  = []
    dest   = Rails.root.join('app', 'javascript', 'mastodon', 'features', 'emoji', 'emoji_map.json')