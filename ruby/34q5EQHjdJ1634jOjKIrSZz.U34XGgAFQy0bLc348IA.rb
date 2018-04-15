
        
          def media_attachments
    { accept_content_types: MediaAttachment::IMAGE_FILE_EXTENSIONS + MediaAttachment::VIDEO_FILE_EXTENSIONS + MediaAttachment::IMAGE_MIME_TYPES + MediaAttachment::VIDEO_MIME_TYPES }
  end
end

    
              env['S3_ENDPOINT'] = prompt.ask('Minio endpoint URL:') do |q|
            q.required true
            q.modify :strip
          end
    
      def unsilence?
    staff?
  end
    
      it 'renders admin layout as an admin' do
    routes.draw { get 'success' => 'admin/base#success' }
    sign_in(Fabricate(:user, admin: true))
    get :success
    expect(response).to render_template layout: 'admin'
  end
end

    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @wipe_all = argv.flag?('all')
          super
        end
    
            self.description = <<-DESC
          Creates a scaffold for the development of a new Pod named `NAME`
          according to the CocoaPods best practices.
          If a `TEMPLATE_URL`, pointing to a git repo containing a compatible
          template, is specified, it will be used in place of the default one.
        DESC