
        
          def caveats
    caveats = []
    begin
      build, f.build = f.build, Tab.for_formula(f)
      s = f.caveats.to_s
      caveats << s.chomp + '\n' if s.length > 0
    ensure
      f.build = build
    end
    caveats << keg_only_text
    caveats << bash_completion_caveats
    caveats << zsh_completion_caveats
    caveats << fish_completion_caveats
    caveats << plist_caveats
    caveats << python_caveats
    caveats << app_caveats
    caveats << elisp_caveats
    caveats.compact.join('\n')
  end
    
      def hardware
    'CPU: #{Hardware.cores_as_words}-core #{Hardware::CPU.bits}-bit #{Hardware::CPU.family}'
  end
    
      def developer_prefix
    `xcode-select --print-path`.strip
  end
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @short_output = argv.flag?('short')
          super
        end