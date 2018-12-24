
        
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
    
          # Find commands in the path
      unless (exts = external_commands).empty?
        puts
        puts 'External commands'
        puts_columns exts
      end
    end
  end
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
      def print_remaining_files(files, root, other = '')
    case files.length
    when 0
      # noop
    when 1
      puts files
    else
      puts '#{root}/ (#{files.length} #{other}files)'
    end
  end
end

    
      def search_tap(user, repo, rx)
    if (HOMEBREW_LIBRARY/'Taps/#{user.downcase}/homebrew-#{repo.downcase}').directory? && \
       user != 'Caskroom'
      return []
    end
    
      it 'ignores empty arrays' do
    expect_no_offenses('[]')
  end
    
    module RuboCop
  module AST
    # A node extension for `case` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `case` nodes within RuboCop.
    class CaseNode < Node
      include ConditionalNode
    
          # Checks whether the `if` node has an `else` clause.
      #
      # @note This returns `true` for nodes containing an `elsif` clause.
      #       This is legacy behavior, and many cops rely on it.
      #
      # @return [Boolean] whether the node has an `else` clause
      def else?
        loc.respond_to?(:else) && loc.else
      end
    
        # Outputs a list of categories as comma-separated <a> links. This is used
    # to output the category list for each post on a category page.
    #
    #  +categories+ is the list of categories to format.
    #
    # Returns string
    #
    def category_links(categories)
      categories.sort.map { |c| category_link c }.join(', ')
    end
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file
    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)