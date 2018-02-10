
        
        
def downgrade():
    op.drop_constraint(None, 'dashboards', type_='unique')
    op.drop_column('dashboards', 'slug')

    
    # revision identifiers, used by Alembic.
revision = '2929af7925ed'
down_revision = '1e2841a4128'
    
    from alembic import op
import sqlalchemy as sa
    
    from alembic import op
import sqlalchemy as sa
    
    # revision identifiers, used by Alembic.
revision = '430039611635'
down_revision = 'd827694c7555'
    
    
def upgrade():
    op.add_column('dbs', sa.Column('allow_run_async', sa.Boolean(), nullable=True))
    op.add_column('dbs', sa.Column('allow_run_sync', sa.Boolean(), nullable=True))
    
    
def upgrade():
    op.create_table('dashboard_user',
        sa.Column('id', sa.Integer(), nullable=False),
        sa.Column('user_id', sa.Integer(), nullable=True),
        sa.Column('dashboard_id', sa.Integer(), nullable=True),
        sa.ForeignKeyConstraint(['dashboard_id'], [u'dashboards.id'], ),
        sa.ForeignKeyConstraint(['user_id'], [u'ab_user.id'], ),
        sa.PrimaryKeyConstraint('id'),
    )
    op.create_table('slice_user',
        sa.Column('id', sa.Integer(), nullable=False),
        sa.Column('user_id', sa.Integer(), nullable=True),
        sa.Column('slice_id', sa.Integer(), nullable=True),
        sa.ForeignKeyConstraint(['slice_id'], [u'slices.id'], ),
        sa.ForeignKeyConstraint(['user_id'], [u'ab_user.id'], ),
        sa.PrimaryKeyConstraint('id'),
    )
    
    # revision identifiers, used by Alembic.
revision = '763d4b211ec9'
down_revision = 'd2424a248d63'
    
            return link_list
    
    site_info = 'FC2Video'
download = fc2video_download
download_playlist = playlist_not_supported('fc2video')

    
    def kuwo_playlist_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html=get_content(url)
    matched=set(re.compile('yinyue/(\d+)').findall(html))#reduce duplicated
    for rid in matched:
        kuwo_download_by_rid(rid,output_dir,merge,info_only)
    
            # extract raw urls
        orig_img = match1(content,
                         r'<meta itemprop='image' content='([^']+/originals/[^']+)'')
        twit_img = match1(content,
                          r'<meta property='twitter:image:src' name='twitter:image:src' content='([^']+)'')
    
    
#----------------------------------------------------------------------
def showroom_download(url, output_dir = '.', merge = False, info_only = False, **kwargs):
    ''''''
    if re.match( r'(\w+)://www.showroom-live.com/([-\w]+)', url):
        room_url_key = match1(url, r'\w+://www.showroom-live.com/([-\w]+)')
        room_id = showroom_get_roomid_by_room_url_key(room_url_key)
        showroom_download_by_room_id(room_id, output_dir, merge,
                                    info_only)