
        
          test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
      test 'token_and_options returns correct token with slashes' do
    token = 'rcHu+\\\\'/896A'
    actual = ActionController::HttpAuthentication::Token.token_and_options(sample_request(token)).first
    expected = token
    assert_equal(expected, actual)
  end
    
        test 'head :no_content (204) does not return a content-type header' do
      headers = HeadController.action(:no_content).call(Rack::MockRequest.env_for('/')).second
      assert_nil headers['Content-Type']
      assert_nil headers['Content-Length']
    end
    
    class WebServiceTest < ActionDispatch::IntegrationTest
  class TestController < ActionController::Base
    def assign_parameters
      if params[:full]
        render plain: dump_params_keys
      else
        render plain: (params.keys - ['controller', 'action']).sort.join(', ')
      end
    end
    
          add_delivery_method :test, Mail::TestMailer
    end
    
      def all_projects(current_user)
    projects = []
    
      yield
end
    
    res = ''
doc = Hpricot(File.open(input))
doc.search('//form').each do |form|
    
        # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 143 and pkt.tcp_dport != 143)
    s = find_session((pkt.tcp_sport == 143) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'imap4'
    
                when :user
              # When the last command was a username login
              # We might keep track on this one in future
            when :pass
              # Perfect we get an +OK after a PASS command this means right password given :-)
    
    classNames.each { |name|
	codez << %Q^
public class #{name} {
	public static void main(String args[]) {
		System.out.println('This is from #{name}.');
	}
}^}
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
      class GistTagNoCache < GistTag
    def initialize(tag_name, text, token)
      super
      @cache_disabled = true
    end
  end
end
    
    module Jekyll
    
            def_node_matcher :only_truthiness_matters?, <<-PATTERN
          ^({if while until case while_post until_post} equal?(%0) ...)
        PATTERN
    
        # Returns the scaling and cropping geometries (in string-based ImageMagick format)
    # neccessary to transform this Geometry into the Geometry given. If crop is true,
    # then it is assumed the destination Geometry will be the exact final resolution.
    # In this case, the source Geometry is scaled so that an image containing the
    # destination Geometry would be completely filled by the source image, and any
    # overhanging image would be cropped. Useful for square thumbnail images. The cropping
    # is weighted at the center of the Geometry.
    def transformation_to dst, crop = false
      if crop
        ratio = Geometry.new( dst.width / self.width, dst.height / self.height )
        scale_geometry, scale = scaling(dst, ratio)
        crop_geometry         = cropping(dst, ratio, scale)
      else
        scale_geometry        = dst.to_s
      end
    
            def no_error_when_valid?
          @file = StringIO.new('.')
          @subject.send(@attachment_name).assign(@file)
          @subject.valid?
          expected_message = [
            @attachment_name.to_s.titleize,
            I18n.t(:blank, scope: [:errors, :messages])
          ].join(' ')
          @subject.errors.full_messages.exclude?(expected_message)
        end
      end
    end
  end
end

    
            def greater_than size
          @low = size
          self
        end
    
    
    {
    {  # Returns hash with styles for all classes using Paperclip.
  # Unfortunately current version does not work with lambda styles:(
  #   {
  #     :User => {:avatar => [:small, :big]},
  #     :Book => {
  #       :cover => [:thumb, :croppable]},
  #       :sample => [:thumb, :big]},
  #     }
  #   }
  def self.current_attachments_styles
    Hash.new.tap do |current_styles|
      Paperclip::AttachmentRegistry.each_definition do |klass, attachment_name, attachment_attributes|
        # TODO: is it even possible to take into account Procs?
        next if attachment_attributes[:styles].kind_of?(Proc)
        attachment_attributes[:styles].try(:keys).try(:each) do |style_name|
          klass_sym = klass.to_s.to_sym
          current_styles[klass_sym] ||= Hash.new
          current_styles[klass_sym][attachment_name.to_sym] ||= Array.new
          current_styles[klass_sym][attachment_name.to_sym] << style_name.to_sym
          current_styles[klass_sym][attachment_name.to_sym].map!(&:to_s).sort!.map!(&:to_sym).uniq!
        end
      end
    end
  end
  private_class_method :current_attachments_styles
    
        # You can add your own processor via the Paperclip configuration. Normally
    # Paperclip will load all processors from the
    # Rails.root/lib/paperclip_processors directory, but here you can add any
    # existing class using this mechanism.
    #
    #   Paperclip.configure do |c|
    #     c.register_processor :watermarker, WatermarkingProcessor.new
    #   end
    def register_processor(name, processor)
      @known_processors ||= {}
      @known_processors[name.to_s] = processor
    end
  end
end

    
        rake_tasks { load 'tasks/paperclip.rake' }
  end