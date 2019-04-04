
        
            def type=(value)
      @type = value.try :strip
    end
    
          def self.prepended(base)
        class << base
          prepend ClassMethods
        end
      end
    
              node['data-language'] = 'typescript' if node['path'].try(:ends_with?, '.ts')
          node['data-language'] = 'html' if node['path'].try(:ends_with?, '.html')
          node['data-language'] = 'css' if node['path'].try(:ends_with?, '.css')
          node['data-language'] = 'js' if node['path'].try(:ends_with?, '.js')
          node['data-language'] = 'json' if node['path'].try(:ends_with?, '.json')
          node['data-language'] = node['language'].sub(/\Ats/, 'typescript').strip if node['language']
          node['data-language'] ||= 'typescript' if node.content.start_with?('@')
    
      describe '#create' do
    let(:like_hash) {
      {post_id: @target.id}
    }
    
        it 'does redirect if there are no invites available with this code' do
      code = InvitationCode.create(user: bob)
      code.update_attributes(count: 0)
    
    World(VagrantHelpers)

    
                <li class='frame-info <%= frame_class(frame) %>'>
              <code><%=h frame.filename %></code> in
                <code><strong><%=h frame.function %></strong></code>
            </li>
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end