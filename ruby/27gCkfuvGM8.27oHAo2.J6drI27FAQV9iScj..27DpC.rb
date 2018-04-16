
        
              keg_only_deps.each do |dep|
        ENV.prepend_path 'PATH', dep.opt_bin.to_s
        ENV.prepend_path 'PKG_CONFIG_PATH', '#{dep.opt_lib}/pkgconfig'
        ENV.prepend_path 'PKG_CONFIG_PATH', '#{dep.opt_share}/pkgconfig'
        ENV.prepend_path 'ACLOCAL_PATH', '#{dep.opt_share}/aclocal'
        ENV.prepend_path 'CMAKE_PREFIX_PATH', dep.opt_prefix.to_s
        ENV.prepend 'LDFLAGS', '-L#{dep.opt_lib}' if dep.opt_lib.directory?
        ENV.prepend 'CPPFLAGS', '-I#{dep.opt_include}' if dep.opt_include.directory?
      end
    end
    
            $stderr.puts
        opoo out
        Homebrew.failed = true
        first_warning = false
      end
    end
    
      SEARCHABLE_TAPS = OFFICIAL_TAPS.map { |tap| ['Homebrew', tap] } + [
    %w[Caskroom cask],
    %w[Caskroom versions]
  ]
    
    # This formula serves as the base class for several very similar
# formulae for Amazon Web Services related tools.
class AmazonWebServicesFormula < Formula
  # Use this method to peform a standard install for Java-based tools,
  # keeping the .jars out of HOMEBREW_PREFIX/lib
  def install
    rm Dir['bin/*.cmd'] # Remove Windows versions
    libexec.install Dir['*']
    bin.install_symlink Dir['#{libexec}/bin/*'] - ['#{libexec}/bin/service']
  end
  alias_method :standard_install, :install
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
    namespace :bower do
    
              @assignments.reverse_each do |assignment|
            next if consumed_branches.include?(assignment.branch)
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
                previous.push(when_node.conditions)
          end
        end
    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end
    
            def_node_matcher :simple_double_comparison?, '(send $lvar :== $lvar)'
        def_node_matcher :simple_comparison?, <<-PATTERN
          {(send $lvar :== _)
           (send _ :== $lvar)}
        PATTERN
    
                end