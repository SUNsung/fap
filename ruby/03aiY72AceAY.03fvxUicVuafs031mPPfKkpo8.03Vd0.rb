
        
              assert_equal 3, ratings.count
    end
    
      has_many :replies, dependent: :destroy, foreign_key: 'parent_id', autosave: true
  has_many :approved_replies, -> { approved }, class_name: 'Reply', foreign_key: 'parent_id', counter_cache: 'replies_count'
    
        # Proc arg
    periodically -> { ping }, every: 2
    
      class StreamTest < ActionCable::TestCase
    test 'streaming start and stop' do
      run_in_eventmachine do
        connection = TestConnection.new
        pubsub = Minitest::Mock.new connection.pubsub
    
    html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
      get(/.+/) do
    send_sinatra_file(request.path) {404}
  end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
      class ImageTag < Liquid::Tag
    @img = nil
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''
    
        def type_from_file_command
      @type_from_file_command ||=
        FileCommandContentTypeDetector.new(@filepath).detect
    end
  end
end

    
        # True if the dimensions represent a vertical rectangle
    def vertical?
      height > width
    end
    
    
    {  # Returns hash with styles missing from recent run of rake paperclip:refresh:missing_styles
  #   {
  #     :User => {:avatar => [:big]},
  #     :Book => {
  #       :cover => [:croppable]},
  #     }
  #   }
  def self.missing_attachments_styles
    current_styles = current_attachments_styles
    registered_styles = get_registered_attachments_styles
    
        module ClassMethods
      # This method is a shortcut to validator classes that is in
      # 'Attachment...Validator' format. It is almost the same thing as the
      # +validates+ method that shipped with Rails, but this is customized to
      # be using with attachment validators. This is helpful when you're using
      # multiple attachment validators on a single attachment.
      #
      # Example of using the validator:
      #
      #   validates_attachment :avatar, :presence => true,
      #      :content_type => { :content_type => 'image/jpg' },
      #      :size => { :in => 0..10.kilobytes }
      #
      def validates_attachment(*attributes)
        options = attributes.extract_options!.dup