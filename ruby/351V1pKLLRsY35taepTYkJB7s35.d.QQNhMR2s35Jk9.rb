
        
          def prepend(*paths)
    @paths = parse(*paths, *@paths)
    self
  end
    
      # Inserts new values or updates existing cached values to persistent storage
  # mechanism
  #
  # @abstract
  def update!(*)
    raise NotImplementedError
  end
    
    module Hbc
  module Artifact
    class AbstractFlightBlock < AbstractArtifact
      def self.dsl_key
        super.to_s.sub(/_block$/, '').to_sym
      end
    
          def link(**options)
        unless source.exist?
          raise CaskError, 'It seems the #{self.class.link_type_english_name.downcase} source '#{source}' is not there.'
        end
    
        # Outputs the post.date as formatted html, with hooks for CSS styling.
    #
    #  +date+ is the date object to format as HTML.
    #
    # Returns string
    def date_to_html_string(date)
      result = '<span class='month'>' + date.strftime('%b').upcase + '</span> '
      result << date.strftime('<span class='day'>%d</span> ')
      result << date.strftime('<span class='year'>%Y</span> ')
      result
    end