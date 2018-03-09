#
    
    module Docs
  class PageDb
    attr_reader :pages
    
        def file_path_for(url)
      File.join self.class.dir, url.remove(base_url.to_s)
    end
    
        def self.parse(url)
      return url if url.kind_of? self
      new(*PARSER.split(url), PARSER)
    end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
            def run
          if @pod_name.nil?
            # Note: at that point, @wipe_all is always true (thanks to `validate!`)
            # Remove all
            clear_cache
          else
            # Remove only cache for this pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            elsif cache_descriptors.count > 1 && !@wipe_all
              # Ask which to remove
              choices = cache_descriptors.map { |c| '#{@pod_name} v#{c[:version]} (#{pod_type(c)})' }
              index = UI.choose_from_array(choices, 'Which pod cache do you want to remove?')
              remove_caches([cache_descriptors[index]])
            else
              # Remove all found cache of this pod
              remove_caches(cache_descriptors)
            end
          end
        end
    
    
  # Jekyll hook - the generate method is called by jekyll, and generates all of the category pages.
  class GenerateCategories < Generator
    safe true
    priority :low
    
        def sizes
      attrs = 'width='#{@sizes[0]}'' if @sizes[0]
      attrs += ' height='#{@sizes[1]}'' if @sizes[1]
      attrs
    end
  end
end
    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
            end
      end
    end
  end
end

    
        i0, s0 = index, []
    r1 = _nt_rvalue
    s0 << r1
    if r1
      r2 = _nt__
      s0 << r2
      if r2
        r3 = _nt_not_in_operator
        s0 << r3
        if r3
          r4 = _nt__
          s0 << r4
          if r4
            r5 = _nt_rvalue
            s0 << r5
          end
        end
      end
    end
    if s0.last
      r0 = instantiate_node(LogStash::Config::AST::NotInExpression,input, i0...index, s0)
      r0.extend(NotInExpression0)
    else
      @index = i0
      r0 = nil
    end