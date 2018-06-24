
        
            # Produce a representation of this Collection for use in Liquid.
    # Exposes two attributes:
    #   - label
    #   - docs
    #
    # Returns a representation of this collection for use in Liquid.
    def to_liquid
      Drops::CollectionDrop.new self
    end
    
          # Conversion
      'markdown'            => 'kramdown',
      'highlighter'         => 'rouge',
      'lsi'                 => false,
      'excerpt_separator'   => '\n\n',
      'incremental'         => false,
    
        # Determine whether the document is a CoffeeScript file.
    #
    # Returns true if extname == .coffee, false otherwise.
    def coffeescript_file?
      ext == '.coffee'
    end
    
      def revoke_moderation!
    set_permission('moderator', false)
  end
    
    class MysqlRequirement < Requirement
  fatal true
  satisfy do
    odisabled('MysqlRequirement', ''depends_on \'mysql\''')
  end
end
    
      # Overriding #satisfied? is unsupported.
  # Pass a block or boolean to the satisfy DSL method instead.
  def satisfied?
    satisfy = self.class.satisfy
    return true unless satisfy
    @satisfied_result = satisfy.yielder { |p| instance_eval(&p) }
    return false unless @satisfied_result
    true
  end
    
      def recursive_dependencies
    deps_f = []
    recursive_dependencies = deps.map do |dep|
      begin
        deps_f << dep.to_formula
        dep
      rescue TapFormulaUnavailableError
        # Don't complain about missing cross-tap dependencies
        next
      end
    end.compact.uniq
    deps_f.compact.each do |f|
      f.recursive_dependencies.each do |dep|
        recursive_dependencies << dep unless recursive_dependencies.include?(dep)
      end
    end
    recursive_dependencies
  end
    
        if rbenv_prefix = prefix_from_bin('rbenv')
      prefixes << rbenv_prefix
    end
    
    ```
#{plugins_string}
```
#{markdown_podfile}
EOS
      end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end