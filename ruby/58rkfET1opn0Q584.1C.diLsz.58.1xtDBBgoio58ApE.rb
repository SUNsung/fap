
        
          describe '#merge' do
    it 'returns itself' do
      expect(env.merge([])).to be env
    end
  end
    
      specify '#f' do
    expect(subject.f).to eq(f)
  end
    
          <div id='post'>
        <h3 id='post-info'>POST</h3>
        <% if req.POST and not req.POST.empty? %>
          <table class='req'>
            <tr>
              <th>Variable</th>
              <th>Value</th>
            </tr>
            <% req.POST.sort_by { |k, v| k.to_s }.each { |key, val| %>
            <tr>
              <td><%=h key %></td>
              <td class='code'><div><%=h val.inspect %></div></td>
            </tr>
            <% } %>
          </table>
        <% else %>
          <p class='no-data'>No POST data.</p>
        <% end %>
        <div class='clear'></div>
      </div> <!-- /POST -->
    <% end %>
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end
    
        # remove 'system' local gems used by LS
    local_gems = gemfile.locally_installed_gems.map(&:name) - NON_PLUGIN_LOCAL_GEMS