
        
          def []=(key, value)
    @checksums[key] = value
  end
    
      def post_superenv_hacks
    # Only allow Homebrew-approved directories into the PATH, unless
    # a formula opts-in to allowing the user's path.
    if formula.env.userpaths? || reqs.any? { |rq| rq.env.userpaths? }
      ENV.userpaths!
    end
  end
    
      # True if a {Formula} is being built in 32-bit/x86 mode.
  # This is needed for some use-cases though we prefer to build Universal
  # when a 32-bit version is needed.
  def build_32_bit?
    include?('32-bit') && option_defined?('32-bit')
  end
    
      def plist_caveats
    s = []
    if f.plist || (keg && keg.plist_installed?)
      destination = if f.plist_startup
        '/Library/LaunchDaemons'
      else
        '~/Library/LaunchAgents'
      end
    
      private
    
    map = {}
dups = []