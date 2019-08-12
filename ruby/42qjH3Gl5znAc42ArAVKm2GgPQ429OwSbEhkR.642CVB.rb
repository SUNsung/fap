
        
                  # Check for long inreplace block vars
          find_all_blocks(body_node, :inreplace) do |node|
            block_arg = node.arguments.children.first
            next unless block_arg.source.size > 1
    
      describe '#satisfied?' do
    subject { described_class.new(%w[1.8]) }
    
          expect(spec.deps).to be_empty
    end
    
        it 'special cases the cxx11 option' do
      subject.option(:cxx11)
      expect(subject).to have_defined_option('c++11')
      expect(subject).not_to have_defined_option('cxx11')
    end
    
          # Look in the standard locations, because even if port or fink are
      # not in the path they can still break builds if the build scripts
      # have these paths baked in.
      %w[/sw/bin/fink /opt/local/bin/port].each do |ponk|
        path = Pathname.new(ponk)
        paths << path if path.exist?
      end
    
          if external_command = which('brewcask-#{command}', path)
        exec external_command, *ARGV[1..-1]
      end
    
        bintray_user = ENV['HOMEBREW_BINTRAY_USER']
    bintray_key = ENV['HOMEBREW_BINTRAY_KEY']
    raise 'Missing HOMEBREW_BINTRAY_USER or HOMEBREW_BINTRAY_KEY variables!' if !bintray_user || !bintray_key
    
      def install_bottle_for?(dep, build)
    return pour_bottle? if dep == formula
    return false if ARGV.build_formula_from_source?(dep)
    return false unless dep.bottle && dep.pour_bottle?
    return false unless build.used_options.empty?
    return false unless dep.bottle.compatible_cellar?