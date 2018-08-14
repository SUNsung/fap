
        
        # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
    module Jekyll
  module Converters
    class Markdown < Converter
      highlighter_prefix '\n'
      highlighter_suffix '\n'
      safe true
    
          # return nil for `{{ site.config }}` even if --config was passed via CLI
      def config; end
    end
  end
end

    
          def fallback_data
        @fallback_data ||= {}
      end
    end
  end
end

    
      def initialize(f)
    @f = f
  end
    
        dirs.each do |d|
      files = []
      d.find { |pn| files << pn unless pn.directory? }
      print_remaining_files files, d
    end
    
      included do
    scope :admins, -> { where(admin: true) }
    scope :moderators, -> { where(moderator: true) }
    scope :staff, -> { where('moderator or admin ') }
  end
    
    ###
### globals
###